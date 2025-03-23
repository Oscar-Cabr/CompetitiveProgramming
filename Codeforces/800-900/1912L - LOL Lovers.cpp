/*
    The following is an original solution to the problem: 1912-L "LOL Lovers" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Strings, Greedy, Implementation.

    Check out the problem at: https://codeforces.com/contest/1912/problem/L

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
    
    string s;
    int n, Ls, Os, sol = -1, actO, actL;
    cin >> n >> s;
    vii LOs(n,{0,0});
    
    if( s[0] == 'L' )
        LOs[0].fi++;
    else
        LOs[0].se++;
    fori(i,1,n)
    {
        LOs[i].fi = LOs[i-1].fi;
        LOs[i].se = LOs[i-1].se;
        if( s[i] == 'L' )
            LOs[i].fi++;
        else
            LOs[i].se++;
    }
    Ls = LOs[n-1].fi;
    Os = LOs[n-1].se;
    
    fori(i,0,n-1)
    {
        actL = LOs[i].fi;
        actO = LOs[i].se;
        if( actL != Ls - actL && actO != Os - actO )
        {
            sol = i+1;
            break;
        }
    }
    
    cout << sol << endl;
    
    return 0;
}