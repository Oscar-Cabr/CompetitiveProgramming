/*
    The following is an original solution to the problem: 2009-A "Minimize!" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Brute Force, Implementation.

    Check out the problem at: https://codeforces.com/contest/2009/problem/A

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

void solve( int a, int b )
{
    int sol = INFTY;
    for( int i = a; i <= b; i++ )
    {
        sol = min( sol, (i - a)+(b - i) );
    }
    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int a, b, tc;
    cin >> tc;
    
    for( int i = 0; i < tc; i++ )
    {
        cin >> a >> b;
        
        solve(a, b);
    }
    
    return 0;
}