/*
    The following is an original solution to the problem: 1915-C "Can I Square?" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1915/problem/C

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <math.h>

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

int main()
{
    fastIO();
    
    ll tc, n, accum, temp;
    string sol;
    
    cin >> tc;
    
    for(int i = 0; i < tc; i++ )
    {
        accum = 0;
        cin >> n;
        
        for(int j = 0; j < n; j++)
        {
            cin >> temp;
            accum += temp;
        }

        sol = pow((int)sqrt(accum),2) == accum ? "YES" : "NO";
        cout << sol << endl;
    }
    
    return 0;
}