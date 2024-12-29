/*
    The following is an original solution to the problem: 1165-B "Polycarp Training" of Codeforces.
    Rated difficulty: 1000. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Greedy, Sorting.

    Check out the problem at: https://codeforces.com/contest/1165/problem/B

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
#define fori(i,a,n) for(int i = a; i < n; i++)
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( vi problems )
{
    int sol = 0, j = 1;
    
    sort( all(problems) );
    
    fori(i,0,(sz(problems)))
    {
        if( j <= problems[i] )
        {
            sol++;
            j++;
        }
    }
    
    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, n, temp;

    cin >> n;
    
    vi problems;
    
    fori(i,0,n)
    {
        cin >> temp;
        problems.pb( temp );
    }
    
    solve( problems );
    
    return 0;
}