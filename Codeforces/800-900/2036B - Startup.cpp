/*
    The following is an original solution to the problem: 2036-B "Startup" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Implementation.

    Check out the problem at: https://codeforces.com/contest/2036/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <map>

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

void solve(int nShelves, int nBottles, vector<int>& brands, vector<int>& costs )
{
    vector<int> vSol;
    map<int, int> vendingM;
    int sol = 0;

    for(int i = 0; i < nBottles; i++ )
    {
        if ( vendingM.count( brands[ i ] ) > 0)
        {
            vendingM[ brands[ i ] ] += costs[ i ];
        }
        else
        {
            vendingM.insert( pair<int,int>( brands[ i ], costs[ i ]) );
        }
    }

    for (auto it = vendingM.rbegin(); it != vendingM.rend(); ++it)
    {
        vSol.push_back( it -> second );
    }

    sort( vSol.rbegin(), vSol.rend() );

    for(int i = 0; i < (int)vSol.size() && i < nShelves; i++)
    {
        sol += vSol[ i ];
    }

    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, shelves, bottles;
    cin >> tc;

    for(int i = 0; i < tc; i++)
    {
        cin >> shelves >> bottles;
        vector<int> brands( bottles ), costs( bottles );
        for( int j = 0; j < bottles; j++ )
        {
            cin >> brands[ j ] >> costs[ j ];
        }
        solve(shelves, bottles, brands, costs);
    }
    return 0;
}