/*
    The following is an original solution to the problem: 2014-A "Robin Helps" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Greedy, Implementation.

    Check out the problem at: https://codeforces.com/contest/2014/problem/A

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

int main()
{
    fastIO();
    
    int tc;
    cin >> tc;
    
    for( int i = 0; i < tc; i++ )
    {
        int n, gold, robin = 0, person, sol = 0;
        cin >> n >> gold;
        
        for( int j = 0; j < n; j++ )
        {
            cin >> person;
            
            if( person >= gold )
                robin += person;
            if( person == 0 && robin > 0 )
            {
                sol++;
                robin--;
            }
        }
        
        cout << sol << endl;
    }
    
    return 0;
}