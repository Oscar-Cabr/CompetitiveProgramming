/*
    The following is an original solution to the problem: 2050-C "Uninteresting Number" of Codeforces.
    Rated difficulty: 1200. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Number Theory, Math, Brute Force.

    Check out the problem at: https://codeforces.com/contest/2050/problem/C

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
void printVI( vi& v ){ fori(i,0,sz(v)) cout << v[i] << " "; cout << endl; }
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

void solve( string n )
{
    int sum, twos = 0, threes = 0, rest, acum, num;
    bool sol = false;
    
    fori(i,0,sz(n))
    {
        if( n[i] == '2' )
            twos++;
        if( n[i] == '3' )
            threes++;
    }
    while( sz(n) != 1 )
    {
        sum = 0;
        fori(i,0,sz(n))
            sum += n[i] - '0';
        n = to_string( sum );
    }
    num = stoi(n);
    if( num == 9 )
        sol = true;
    else
    {
        for( int i = 0; i < 11 && i < twos+1 && sol == false; i++ )
            for( int j = 0; j < 11 && j < threes+1 && sol == false; j++ )
                if( ( num + 2*i + 6*j ) % 9 == 0 )
                    sol = true;
    }
        
    cout << ( sol ? "YES" : "NO" ) << endl;
}

int main() {
    fastIO();
    int tc;
    string str;
    
    cin >> tc;
    
    fori(t,0,tc)
    {
        cin >> str;
        solve( str );
    }
    
    return 0;
}