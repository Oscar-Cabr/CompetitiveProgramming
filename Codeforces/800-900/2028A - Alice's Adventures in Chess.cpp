/*
    The following is an original solution to the problem: 2028-A "Alice's Adventures in "Chess"" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Brute Force, Implementation.

    Check out the problem at: https://codeforces.com/contest/2028/problem/A

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

void solve( int n, int a, int b, string moves )
{
    int x = 0, y = 0;
    char dir;
    bool sol = false;

    for(int i = 0; i < 210; i++)
    {
        dir = moves[ i % n ];
        switch( dir )
        {
            case 'N': y++; break;
            case 'E': x++; break;
            case 'S': y--; break;
            case 'W': x--;  break;
        }

        if( x == a && y == b )
        {
            sol = true;
            break;
        }
    }

    if( sol )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();

    int tc, n, x, y;
    string moves;

    cin >> tc;

    for(int i = 0; i < tc; i++)
    {
        cin >> n >> x >> y >> moves;

        solve(n, x, y, moves);
    }

    return 0;
}