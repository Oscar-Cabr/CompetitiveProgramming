/*
    The following is an original solution to the problem: 2051-C "Preparing for the Exam" of Codeforces.
    Rated difficulty: 1000. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Maths.

    Check out the problem at: https://codeforces.com/contest/2051/problem/C

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

void solve( int n, int k, int m, vi& nums, int target )
{
    string sol = "";

    if( k == n )
        fori(i,0,m)
            sol += '1';
    else if( k != n-1 )
        fori(i,0,m)
            sol += '0';
    else
    {
        fori(i,0,m)
            if( nums[i] == target )
                sol += '1';
            else
                sol += '0';
    }

    cout << sol << endl;
}

int main() {
    fastIO();

    int tc, n, m, k, temp;
    ll monocarp;
    
    cin >> tc;
    
    fori(i,0,tc)
    {
        cin >> n >> m >> k;
        vi missings(m);
        fori(j,0,m)
            cin >> missings[j];
        monocarp = ((ll)n * ((ll)n+1)) / 2;
        fori(j,0,k)
        {
            cin >> temp;
            monocarp -= temp;
        }
        solve( n, k, m, missings, monocarp );
    }
    
    return 0;
}