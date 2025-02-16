/*
    The following is an original solution to the problem: 2060-A "Fibonacciness" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Brute force.

    Check out the problem at: https://codeforces.com/contest/2060/problem/A

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
    
int fibonacciness( vi& v )
{
    int fibness = 0;
    fori(i,2,5)
        if( v[i] == v[i-1] + v[i-2] )
            fibness++;
    return fibness;
}

int main() {
    fastIO();
    
    int tc, sol, fibo;
    cin >> tc;
    fori(t,0,tc)
    {
        vi n(5);
        sol = 1;
        cin >> n[0]; cin >> n[1];
        cin >> n[3]; cin >> n[4];
        n[2] = n[0] + n[1];
        sol = max( sol, fibonacciness(n) );
        n[2] = n[3] - n[1];
        sol = max( sol, fibonacciness(n) );
        n[2] = n[4] - n[3];
        sol = max( sol, fibonacciness(n) );
        
        cout << sol << endl;
    }

    return 0;
}