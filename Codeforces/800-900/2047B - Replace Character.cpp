/*
    The following is an original solution to the problem: 2047-B "Replace Character" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Greedy.

    Check out the problem at: https://codeforces.com/contest/2047/problem/B

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
const int INF = INT_MAX;
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

void solve( string str )
{
    map<char,int> letters;
    vector<pair<int,char>> sorted;
    char lesser, greatest;

    fori(i,0,(sz(str)))
    {
        if( letters.find(str[i]) == letters.end() )
            letters[ str[i] ] = 1;
        else
            letters[ str[i] ]++;
    }
    if( sz(letters) > 1 )
    {
        for (auto it = letters.begin(); it != letters.end(); ++it)
        {
            sorted.pb({it->se, it->fi});
        }
        sort( all(sorted) );
        lesser = sorted[0].se;
        greatest = sorted[ sz(sorted)-1 ].se;
        fori(i,0,sz(str))
            if(str[i] == lesser)
            {
                str[i] = greatest;
                break;
            }
    }

    cout << str << endl;
}

int main() {
    fastIO();
//    setIO();
    int testCases, n;
    string str;
    cin >> testCases;
    fori(i,0,testCases)
    {
        cin >> n >> str;
        solve( str );
    }
    return 0;
}