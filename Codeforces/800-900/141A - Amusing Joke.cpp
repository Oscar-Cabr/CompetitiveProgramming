/*
    The following is an original solution to the problem: 141-A "Amusing Joke" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Sorting, Strings.

    Check out the problem at: https://codeforces.com/contest/141/problem/A

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
    
    string s1, s2, s3;
    
    cin >> s1 >> s2 >> s3;
    
    s1 += s2;
    sort( all(s1) );
    sort( all(s3) );
    
    cout << (( s1 == s3 ) ? "YES" : "NO") << endl;
    
    return 0;
}