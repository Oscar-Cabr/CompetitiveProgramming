/*
    The following is an original solution to the problem: 492-B "Vanya and Lanterns" of Codeforces.
    Rated difficulty: 1200. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Math, Implementation, Constructive Algorithms.

    Check out the problem at: https://codeforces.com/contest/492/problem/B

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
#define sz(a) ((int)(a.size()))
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
const int MOD = 1e9+7;
const int INFTY = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 1e-9;
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
void printVector( vi& v ){ fori(i,0,sz(v)) cout << v[i] << " "; cout << endl; }
ld ldMax( ld a, ld b ){
    return a > b ? a : b;
}

int main() {
    fastIO();

    int nLanterns;
    ll lantern, length;
    ld sol;

    cin >> nLanterns >> length;
    set<ll> lanterns, diffs;

    fori(i,0,nLanterns)
    {
        cin >> lantern;
        lanterns.insert(lantern);
    }
        
    for(auto it = lanterns.begin(), prev = it; it != lanterns.end(); prev = it, ++it) {
        if (it != lanterns.begin()) {
            diffs.insert(abs( *it - *prev ));
        }
    }

    sol = diffs.empty() ? 0 : *diffs.rbegin() / (ld)2;
    sol = ldMax( sol, abs( *lanterns.begin() ) );
    sol = ldMax( abs( length - *lanterns.rbegin() ), sol );
    
    cout << fixed << setprecision(10) << sol << endl;

    return 0;
}