/*
    The following is an original solution to the problem: 2037-A "Twice" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/2037/problem/A

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
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( vector<int>& numbers )
{
    vector<int> dp( 21, 0 );
    int sol = 0;

    for( int i = 0; i < (int)numbers.size(); ++i )
    {
        dp[ numbers[i] ]++;
    }

    for( int i = 0; i <= 20; i++ )
    {
        while( dp[i] >= 2 )
        {
            dp[i] -= 2;
            sol++;
        }
    }

    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, n;

    cin >> tc;

    for( int i = 0; i < tc; i++ )
    {
        cin >> n;
        vector<int> numbers(n);

        for( int j = 0; j < n; ++j )
        {
            cin >> numbers[ j ];
        }

        solve(numbers);
    }

    return 0;
}