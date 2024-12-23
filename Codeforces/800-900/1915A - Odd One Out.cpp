/*
    The following is an original solution to the problem: 1915-A "Odd One Out" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1915/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;
#define endl '\n'
#define fi first
#define se second
typedef long long ll;
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( string str)
{
    int a = 0, b = 0;
    string sol;
    
    for( int i = 0; i < (int)str.size(); i++ )
    {
        if( str[i] == 'A' )
            a++;
        else
            b++;
    }
        
    sol = a > b ? 'A' : 'B';
    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, a, b, c, sol;
    
    cin >> tc;
    
    for(int i = 0; i < tc; i++ )
    {
        cin >> a >> b >> c;
        sol = a;
        
        if( a == b )
            sol = c;
        if( a == c )
            sol = b;
            
        cout << sol << endl;
    }
    
    return 0;
}