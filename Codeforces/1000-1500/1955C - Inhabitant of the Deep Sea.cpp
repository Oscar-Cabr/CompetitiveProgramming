/*
    The following is an original solution to the problem: 1955-C "Inhabitant of the Deep Sea" of Codeforces.
    Rated difficulty: 1300. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Greedy, Data Structures, Deque.

    Check out the problem at: https://codeforces.com/contest/1955/problem/C

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
void printVector( auto& v ){ fori(i,0,sz(v)) cout << v[i].fi << " " << v[i].se << " "; cout << endl; }
void fastIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

void solve( deque<int> boats, int n, ll k, ll sum )
{
    if( sum <= k )
    {
        cout << n << endl;
        return;
    }
    
    while( sz(boats) > 1 && k >= 2 * min( boats.front(), boats.back() ) )
    {
        if( boats.front() == boats.back() )
        {
            k -= 2 * boats.front();
            boats.pop_front();
            boats.pop_back();
        }
        else if( boats.front() < boats.back() )
        {
            k -= 2 * boats.front();
            boats.back() -= boats.front();
            boats.pop_front();
        }
        else
        {
            k -= 2 * boats.back();
            boats.front() -= boats.back();
            boats.pop_back();
        }
    }
    
    if( sz(boats) == 1 && k >= boats.back() || k == 2 * boats.front() - 1 )
        boats.pop_back();

    cout << n - sz(boats) << endl;
}

int main()
{
    fastIO();
    
    ll krakenAttacks, sum;
    int tc, nBoats;
    
    cin >> tc;
    
    fori(t,0,tc)
    {
        sum = 0;
        cin >> nBoats >> krakenAttacks;
        deque<int> boats(nBoats);
        fori(i,0,nBoats)
        {
            cin >> boats[i];
            sum += boats[i];
        }
        solve( boats, nBoats, krakenAttacks, sum );
    }

    return 0;
}