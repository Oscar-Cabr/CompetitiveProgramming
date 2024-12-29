/*
    The following is an original solution to the problem: 368-B "Sereja and Suffixes" of Codeforces.
    Rated difficulty: 1100. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Suffix Sum.

    Check out the problem at: https://codeforces.com/contest/368/problem/B

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

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastIO();
    
    int n, m;
    
    cin >> n >> m;
    
    vector<int> sol(n);
    set<int> suffix;
    
    for(int i = 0; i < n; i++ )
        cin >> sol[i];
        
    for(int i = n-1; i >= 0; i-- )
    {
        suffix.insert( sol[i] );
        sol[i] = (int)suffix.size();
    }
    
    for(int i = 0; i < m; i++ )
    {
        int a;
        cin >> a;
        a--;
        cout << sol[a] << endl;
    }
    
    return 0;
}