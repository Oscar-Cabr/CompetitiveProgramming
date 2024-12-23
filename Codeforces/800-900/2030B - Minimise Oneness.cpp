/*
    The following is an original solution to the problem: 2030-B "Minimise Oneness" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Math, Constructive Algorithm.

    Check out the problem at: https://codeforces.com/contest/2030/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
#define endl '\n'
#define fi first
#define se second
typedef long long ll;
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

vector<int> factorization;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( int n )
{
    string sol = "0";

    if( n > 1 )
    {
        sol.push_back('1');
        
        for( int i = 2; i < n; i++ )
        {
            sol.push_back('0');
        }
    }

    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc;
    cin >> tc;
    
    for(int i = 0; i < tc; i++)
    {
        int n;
        cin >> n;
        solve( n );
    }
    
    return 0;
}