/*
    The following is an original solution to the problem: 535-B "Tavas and SaDDas" of Codeforces.
    Rated difficulty: 1100. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Bit Manipulation, Greedy.

    Check out the problem at: https://codeforces.com/contest/535/problem/B

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
typedef unsigned int uint;
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
    
    string n;
    cin >> n;
    uint sol;
    
    fori(i,0,sz(n))
    {
        int j = sz(n) - i;
        if( n[i] == '7' )
            sol += ( 1 << j+1 );
        else
            sol += ( 1 << j );
    }
    sol >>= 1;
    
    cout << sol << endl;
    
    return 0;
}