/*
    The following is an original solution to the problem: 2042-A "Greedy Monocarp" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Greedy, Sortings.

    Check out the problem at: https://codeforces.com/contest/2042/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef __int128 sll;
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(a) (int)a.size()
#define fori(i,a,n) for(int i = a; i < n; i++)
const int MOD = 1e9+7;
const int INFTY = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 10e-9;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( int n, int k, vi chests )
{
    int sol = 0, i;

    sort( rall(chests) );

    for(i = 0; i < sz(chests) && sol < k; i++ )
    {
        sol += chests[i];
        if( sol == k )
            break;
    }

    if( sol != k )
    {
        if( sol > k )
            sol -= chests[i-1];
        sol = k - sol;
    }
    else
        sol = 0;

    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, n, k;

    cin >> tc;

    fori(i,0,tc)
    {
        cin >> n >> k;
        vi chests(n);
        fori(j,0,n)
        {
            cin >> chests[j];
        }
        solve( n, k, chests );
    }
    
    return 0;
}