/*
    The following is an original solution to the problem: 6-B "President's Office" of Codeforces.
    Rated difficulty: 1100. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Graphs as Grids.

    Check out the problem at: https://codeforces.com/contest/6/problem/B

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
    
    vii presidentDesktop;
    set<char> sol;
    string str;
    char presi;
    int n, m;
    
    cin >> n >> m >> presi;
    
    vector<string> a(n+2);
    a[0] = string(m+2,'.');
    a[n+1] = string(m+2,'.');
    
    fori(i,1,n+1)
    {
        cin >> str;
        a[i] = '.' + str + '.';
    }
    
    fori(i,0,n+2)
    {
        fori(j,0,m+2)
        {
            if( a[i][j] == presi )
            {
                if( a[i-1][j] != '.' && a[i-1][j] != presi )
                    sol.insert(a[i-1][j]);
                if( a[i][j-1] != '.' && a[i][j-1] != presi )
                    sol.insert(a[i][j-1]);
                if( a[i+1][j] != '.' && a[i+1][j] != presi )
                    sol.insert(a[i+1][j]);
                if( a[i][j+1] != '.' && a[i][j+1] != presi )
                    sol.insert(a[i][j+1]);
            }
        }
    }
    
    cout << sz(sol) << endl;

    return 0;
}