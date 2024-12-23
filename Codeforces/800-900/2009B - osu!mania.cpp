/*
    The following is an original solution to the problem: 2009-B "osu!mania" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/2009/problem/B

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

int main()
{
    fastIO();
    
    int tc, n;
    string line;
    
    cin >> tc;

    for(int i = 0; i < tc; i++)
    {
        cin >> n;
        vector<int> sol;

        for(int j = 0; j < n; j++)
        {
            cin >> line;
            for(int k = 0; k < 4; k++)
            {
                if( line[k] == '#' )
                {
                    sol.push_back( k + 1 );
                    break;
                }
            }
        }

        for( int j = n-1; j >= 0; j-- )
        {
            cout << sol[j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}