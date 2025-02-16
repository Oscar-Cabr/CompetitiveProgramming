/*
    The following is an original solution to the problem: 2051-B "Journey" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/2051/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)(a.size())
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
const int MOD = 1e9+7;
const int INFTY = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = DBL_EPSILON;
void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void setIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve( int n, int a, int b, int c )
{
    int sol, chunk = a + b + c, walked;

    sol = 3 * floor( n / chunk );
    walked = floor( n / chunk ) * chunk;
    while( walked < n )
    {
        walked += a;
        if( walked >= n )
        {
            sol++;
            break;
        }
        walked += b;
        if( walked >= n )
        {
            sol += 2;
            break;
        }
        sol += 3;
        break;
    }
    cout << sol << endl;
}

int main() {
    fastIO();

    int tc, n, a, b, c;
    
    cin >> tc;
    
    fori(i,0,tc)
    {
        cin >> n >> a >> b >> c;
        solve(n, a, b, c);
    }
    
    return 0;
}