/*
    The following is an original solution to the problem: 1071 - "Number Spiral" of CSES Problemset.
    Rated difficulty: 51530 / 56213. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Maths.

    Check out the problem at: https://cses.fi/problemset/task/1071

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

void solve( ll row, ll column )
{
    ll sol;

    if( row == column )
    {
        sol = row * row - row + 1;
    }
    else
    {
        if( row > column )
        {
            if( row % 2 == 0 )
                sol = row * row - column + 1;
            else
                sol = row * row - row + 1 - ( row - column );
        }
        else
        {
            if( column % 2 != 0 )
                sol = column * column - row + 1;
            else
                sol = column * column - column + 1 - ( column - row );
        }
    }

    cout << sol << endl;
}

int main() {
    fastIO();

    int tc;
    ll row, column;
    
    cin >> tc;
    
    fori(i,0,tc)
    {
        cin >> row >> column;
        solve( row, column );
    }

    return 0;
}