/*
    The following is an original solution to the problem: 1633 - "Dice Combinations" of CSES Problemset.
    Rated difficulty: 57426 / 61054. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Dynamic Programming.

    Check out the problem at: https://cses.fi/problemset/task/1633

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <vector>

#define MOD 1000000007;

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;

    cin >> n;

    vector<int> dp(n+1,0);
    
    for(int i = 1; i <= 6 && i <= n; i++)
    {
        dp[i] = 1 << ( i - 1 );
    }
    
    for(int i = 7; i <= n; i++)
    {
        for(int j = 1; j <= 6; j++)
        {
            dp[i] += dp[i-j];
            dp[i] %= MOD;
        }
    }
    
    cout << dp[n];
    
    return 0;
}