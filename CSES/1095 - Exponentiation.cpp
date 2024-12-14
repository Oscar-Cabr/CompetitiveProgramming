/*
    The following is an original solution to the problem: 1095 - "Exponentiation" of CSES Problemset.
    Rated difficulty: 18107 / 19492. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Maths, Binary Exponentiation (Binpow).

    Check out the problem at: https://cses.fi/problemset/task/1095

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define endl '\n'
#define fi first
#define se second
#define ll long long
const int MOD = 1e9+7;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve( ll a, ll b )
{
    int sol = 1;
    
    while( b > 0 )
    {
        if( b & 1 )
        {
            sol = ( 1LL * sol * a ) % MOD;
        }
        a = ( 1LL * a * a ) % MOD;
        b >>= 1;
    }
    
    cout << sol << endl;
}

int main()
{
    fastIO();

    int testCases;
    
    cin >> testCases;
    
    for(int i = 0; i < testCases; i++)
    {
        ll a, b;
        
        cin >> a >> b;
        
        solve(a, b);
    }

    return 0;
}