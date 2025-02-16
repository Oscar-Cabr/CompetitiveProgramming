/*
    The following is an original solution to the problem: 230-A "Dragons" of Codeforces.
    Rated difficulty: 1000. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Sortings, Implementation.

    Check out the problem at: https://codeforces.com/contest/230/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

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

int main()
{
    fastIO();
    
    ll kirito;
    int nDragons;
    
    cin >> kirito >> nDragons;
    
    vii dragons(nDragons);
    
    fori(i,0,nDragons)
    {
        cin >> dragons[i].fi >> dragons[i].se;
    }
        
    sort( all(dragons) );
    
    int i;
    for( i = 0; i < nDragons && kirito > dragons[i].fi; i++ )
        kirito += dragons[i].se;
        
    cout << ( i == nDragons ? "YES" : "NO" ) << endl;

    return 0;
}