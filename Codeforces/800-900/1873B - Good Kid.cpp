/*
    The following is an original solution to the problem: 1873-B "Good Kid" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Sorting, Implementation.

    Check out the problem at: https://codeforces.com/contest/1873/problem/B

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

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastIO();
    
    ll tc, n, sol;
    
    cin >> tc;
    
    for(int i = 0; i < tc; i++ )
    {
        cin >> n;
        sol = 1;
        
        vector<int> numbers(n);
        
        for( int j = 0; j < n; j++ )
            cin >> numbers[j];
        
        sort( numbers.begin(), numbers.end() );
        
        numbers[ 0 ]++;
        
        for( int j = 0; j < n; j++ )
            sol *= numbers[j];
            
        cout << sol << endl;
    }
    
    return 0;
}