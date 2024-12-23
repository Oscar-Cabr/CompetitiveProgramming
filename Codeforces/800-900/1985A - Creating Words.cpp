/*
    The following is an original solution to the problem: 1985-A "Creating Words" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Strings, Implementation.

    Check out the problem at: https://codeforces.com/contest/1985/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>

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

void solve( string str1, string str2 )
{
    char temp;
    temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;
    
    cout << str1 << " " << str2 << endl;
}

int main()
{
    fastIO();
    
    int tc;
    string str1, str2;
    
    cin >> tc;
    
    for(int i = 0; i < tc; i++ )
    {
        cin >> str1 >> str2;
        
        solve( str1, str2 );
    }
    
    return 0;
}