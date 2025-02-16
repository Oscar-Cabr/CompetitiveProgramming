/*
    The following is an original solution to the problem: 2037-D "Sharky Surfing" of Codeforces.
    Rated difficulty: 1300. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Greedy, Priority Queue, Two Pointers.

    Check out the problem at: https://codeforces.com/contest/2037/problem/D

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
void printVector( const auto& v ){ fori(i,0,sz(v)) cout << v[i].fi << " " << v[i].se << " "; cout << endl; }
void fastIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

void solve( vii& hurdles, vii& powerUps, int nHurdles, int nPowerUps )
{
    ll jumpPower = 1;
    int diff, j = 0, sol = 0;

    priority_queue<ll> pq;

    sort( all(hurdles) );
    sort( all(powerUps) );

    fori(i,0,nHurdles)
    {
        while( j < nPowerUps && powerUps[j].fi <= hurdles[i].fi )
            pq.push( powerUps[j++].se );

        diff = hurdles[i].se - hurdles[i].fi + 2;
        
        while( ! pq.empty() && jumpPower < diff )
        {
            jumpPower += pq.top();
            pq.pop();
            sol++;
        }

        if( jumpPower < diff )
        {
            sol = -1;
            break;
        }
    }

    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, nHurdles, nPowerUps, n; 

    cin >> tc;

    fori(t,0,tc)
    {
        cin >> nHurdles >> nPowerUps >> n;
        vii hurdles( nHurdles ), powerUps( nPowerUps );

        fori(i,0,nHurdles)
            cin >> hurdles[i].fi >> hurdles[i].se;
        fori(i,0,nPowerUps)
            cin >> powerUps[i].fi >> powerUps[i].se;

        solve( hurdles, powerUps, nHurdles, nPowerUps );
    }

    return 0;
}