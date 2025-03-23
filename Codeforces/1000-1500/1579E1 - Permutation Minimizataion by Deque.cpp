/*
    The following is an original solution to the problem: 1579-E1 "Permutation Minimization by Deque" of Codeforces.
    Rated difficulty: 1000. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Deque.

    Check out the problem at: https://codeforces.com/contest/1579/problem/E1

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

void solve( vi& p, int n )
{
    deque<int> sol;
    sol.pb( p[0] );
    
    fori(i,1,n)
    {
        if( p[i] <= sol.front() )
            sol.push_front( p[i] );
        else
            sol.pb( p[i] );
    }
    
    fori(i,0,n)
        cout << sol[i] << " ";
    cout << endl;
}

int main()
{
    fastIO();
    
    int tc, n;
    
    cin >> tc;
    
    fori(t,0,tc)
    {
        cin >> n;
        vi permutation(n);
        
        fori(i,0,n)
            cin >> permutation[i];
        
        solve( permutation, n );
    }

    return 0;
}