/*
    The following is an original solution to the problem: 1646 - "Static Range Sum Queries" of CSES Problemset.
    Rated difficulty: 28628 / 29933. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Range Queries, Prefix Sum.

    Check out the problem at: https://cses.fi/problemset/task/1646

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
void printVector( vll& v ){ fori(i,0,sz(v)) cout << v[i] << " "; cout << endl; }
void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( vll& preffix, int l, int r )
{
    ll sol;

    sol = preffix[r] - preffix[l-1];
    
    cout << sol << endl;
}

int main() 
{
    fastIO();
    
    int nValues, nQueries, l, r;

    cin >> nValues >> nQueries;

    vll values( ++nValues );

    values[0] = 0;
    fori(i,1,nValues)
    {
        cin >> values[i];
        values[i] += values[i-1];
    }

    fori(i,0,nQueries)
    {
        cin >> l >> r;
        solve( values, l, r );
    }

    return 0;
}