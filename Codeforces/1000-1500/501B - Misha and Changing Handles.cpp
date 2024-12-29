/*
    The following is an original solution to the problem: 501-B "Misha and Changing Handles" of Codeforces.
    Rated difficulty: 1100. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Implementation.

    Check out the problem at: https://codeforces.com/contest/501/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>

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
    
    vector<pair<string, string>> sol;
    string old, newN;
    bool yaEstaba;
    int tc;
    
    cin >> tc;
    
    for(int i = 0; i < tc; i++ )
    {
        yaEstaba = false;
        
        cin >> old >> newN;
        for( int i = 0; i < (int)sol.size(); i++ )
        {
            pair<string,string> temp = sol[i];
            if( temp.se == old )
            {
                sol[i].se = newN;
                yaEstaba = true;
                break;
            }
        }
        
        if( ! yaEstaba )
            sol.push_back( {old, newN} );
    }
    
    cout << sol.size() << endl;
    for( pair<string,string> solElem : sol )
    {
        cout << solElem.fi << " " << solElem.se << endl;
    }
    
    return 0;
}