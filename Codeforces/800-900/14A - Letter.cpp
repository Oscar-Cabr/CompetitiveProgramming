/*
    The following is an original solution to the problem: 14-A "Letter" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Strings, Implementation.

    Check out the problem at: https://codeforces.com/contest/14/problem/A

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
void printVector( vi& v ){ fori(i,0,sz(v)) cout << v[i] << " "; cout << endl; }
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

int main() {
    fastIO();
    
    ii ini = {INFTY, INFTY}, fin = {-1,-1};
    int n, m;
    string temp;
    
    cin >> n >> m;
    
    vector<vector<char>> grid( n, vector<char> ( m ) );
    
    fori(i,0,n)
    {
        cin >> temp;
        fori(j,0,m)
        {
            grid[i][j] = temp[j];
            if (grid[i][j] == '*') {
                ini.fi = min(ini.fi, i);
                ini.se = min(ini.se, j);
                fin.fi = max(fin.fi, i);
                fin.se = max(fin.se, j);
            }
        }
    }
        
    for( int i = ini.fi; i <= fin.fi; i++ )
    {
        for( int j = ini.se; j <= fin.se; j++ )
            cout << grid[i][j];
        cout << endl;
    }

    return 0;
}