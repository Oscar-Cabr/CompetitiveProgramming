/*
    The following is an original solution to the problem: 2050-B "Transfusion" of Codeforces.
    Rated difficulty: 1100. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Contructive Algorithm.

    Check out the problem at: https://codeforces.com/contest/2050/problem/B

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

void solve( int n, vi& v )
{
    bool itsPossible = true;
    ll sum = 0, elems = 0, num;
    for( int i = 0; i < sz(v); i += 2 )
    {
        sum += v[i];
        elems++;
    }
    if( sum % elems != 0 )
        itsPossible = false;
    else
        num = sum / elems;
    if( itsPossible )
    {
        sum = elems = 0;
        for( int i = 1; i < sz(v); i+= 2 )
        {
            sum += v[i];
            elems++;
        }
        if( sum % elems != 0 || num != sum / elems )
            itsPossible = false;
    }
    if( itsPossible )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    int testCases, n;
    cin >> testCases;
    while( testCases-- ) {
        cin >> n;
        vi numbers(n);
        fori(i,0,n)
            cin >> numbers[i];
        solve( n, numbers );
    }
    return 0;
}