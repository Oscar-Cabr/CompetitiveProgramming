/*
    The following is an original solution to the problem: 1946-A "Median of an Array" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Sorting, Greedy, Implementation.

    Check out the problem at: https://codeforces.com/contest/1946/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

using namespace std;
typedef vector<int> vi;
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(a) (int)a.size()
#define for(i,a,n) for(int i = a; i < n; i++)
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( int n, vi numbers )
{
    int sol = 1, median = (int)ceil((double)n/2), diff;
    sort( all(numbers) );
    numbers[median]++;
    for(i,median,n)
    {
        if( numbers[i] > numbers[i+1] )
        {
            diff = numbers[i] - numbers[i+1];
            numbers[i+1] += diff;
            sol += diff;
        }
    }
    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, n;

    cin >> tc;
    
    for(i,0,tc)
    {
        cin >> n;
        vi numbers(n+1);
        numbers[0] = 0;
        for(j,1,n+1)
        {
            cin >> numbers[j];
        }
        solve(n, numbers);
    }
    
    return 0;
}