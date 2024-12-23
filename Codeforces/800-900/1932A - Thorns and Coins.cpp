/*
    The following is an original solution to the problem: 1932-A "Thorns and Coins" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Greedy, Implementation.

    Check out the problem at: https://codeforces.com/contest/1932/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <set>

using namespace std;
#define endl '\n'
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( int n, string path )
{
    int sol = 0;
    for(int i = 1; i < n && !(path[i-1] == '*' && path[i] == '*'); i++ )
    {
        if( path[i] == '@' )
            sol++;
    }
    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, n;
    string path;

    cin >> tc;
    
    for(int i = 0; i < tc; i++)
    {
        cin >> n >> path;
        solve( n, path );
    }
    
    return 0;
}