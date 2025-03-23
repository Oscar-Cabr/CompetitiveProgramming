/*
    The following is an original solution to the problem: 2027-C "Add Zeros" of Codeforces.
    Rated difficulty: 1500. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Graphs, DFS.

    Check out the problem at: https://codeforces.com/contest/2027/problem/C

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

// Racso programmed here
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef __int128 sll;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef vector<pll> vpll;
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
void printVector( auto& v ){ fori(i,0,sz(v)) cout << v[i] << " "; cout << endl; }
void fastIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

void solve( vll& a, ll n )
{
    map<ll,vll> adj;
    set<ll> visited;
    
    fori(i,0,n)
    {
        ll u = a[i] + i;
        ll v = u + i;
        adj[u].pb(v);
    }
    
    function<void(ll)> dfs = [&](ll u) -> void {
        if( visited.count(u) ) return;
        visited.insert(u);
        for( ll v : adj[u] )
            dfs(v);
    };
    
    dfs(n);
    
    cout << *visited.rbegin() << endl;
}

int main()
{
    fastIO();
    
    int tc, n;
    
    cin >> tc;
    
    fori(t,0,tc)
    {
        cin >> n;
        vll nums(n);
        fori(i,0,n)
            cin >> nums[i];
        solve( nums, n );
    }
    
    return 0;
}