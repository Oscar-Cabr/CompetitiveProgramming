/*
    The following is an original solution to the problem: 550-A "Two Substrings" of Codeforces.
    Rated difficulty: 1500. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Strings, Implementation.

    Check out the problem at: https://codeforces.com/contest/550/problem/A

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

int main() {
    fastIO();

    string str, AB = "AB", BA = "BA";
    bool sol = false;
    size_t pos;
    
    cin >> str;
    
    pos = str.find( AB );
    if( pos != string::npos )
    {
        pos = str.substr( pos + 2, sz(str) - pos + 2 ).find( BA );
        if( pos != string::npos )
            sol = true;
    }
    if( ! sol )
    {
        pos = str.find( BA );
        if( pos != string::npos )
        {
            pos = str.substr( pos + 2, sz(str) - pos + 2 ).find( AB );
            if( pos != string::npos )
                sol = true;
        }
    }
    
    cout << ( sol ? "YES" : "NO" );

    return 0;
}