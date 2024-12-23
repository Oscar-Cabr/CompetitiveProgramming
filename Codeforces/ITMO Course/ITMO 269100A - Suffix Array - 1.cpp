/*
    The following is an original solution to the problem: 269100-A "Suffix Array - 1" of Codeforces ITMO's Course, "Suffix Array -> Step 1 -> Practice".
    Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Suffix Sum.

    Check out the problem at: https://codeforces.com/edu/course/2/lesson/2/1/practice/contest/269100/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve( string str )
{
    int size = str.size();
    vector<int> p(size), c(size);
    
    vector< pair<char, int> > a(size);
    
    for(int i = 0; i < size; i++)
    {
        a[i] = { str[i], i };
    }
    sort( a.begin(), a.end() );
    
    for(int i = 0; i < size; i++)
    {
        p[i] = a[i].second;
    }
    c[ p[0] ] = 0;
    
    for(int i = 1; i < size; i++)
    {
        if( a[i].first == a[i - 1].first)
        {
            c[ p[i] ] = c[ p[i - 1] ];
        }
        else
        {
            c[ p[i] ] = c[ p[i - 1] ] + 1;
        }
    }
    
    int k = 0;
    while( (1 << k ) < size )
    {
        vector< pair< pair<int, int>, int > > a(size);
        
        for(int i = 0; i < size; i++)
        {
            a[i] = {{ c[i], c[ (i + (1 << k)) % size ]}, i };
        }
        sort( a.begin(), a.end() );
        
        for( int i = 0; i < size; i++)
        {
            p[i] = a[i].second;
        }
        c[ p[0] ] = 0;
        
        for(int i = 1; i < size; i++)
        {
            if( a[i].first == a[i - 1].first )
            {
                c[ p[i] ] = c[ p[i - 1] ];
            }
            else
            {
                c[ p[i] ] = c[ p[i - 1] ] + 1;
            }
        }
        k++;
    }
    
    for(int i = 0; i < size; i++)
    {
        cout << p[i] << " ";
        //cout << p[i] << " " << str.substr( p[i], size - p[i] ) << endl;
    }
}

int main()
{
    fastIO();
    
    string s;
    
    cin >> s;
    
    s += "$";
    
    solve( s );
    
    return 0;
}