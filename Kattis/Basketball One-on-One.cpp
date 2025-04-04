/*
    The following is an original solution to the problem: "Basketball One-on-One" of Kattis Onlide Judge.
    Rated difficulty: Easy. Language: C++.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc.

    Check out the problem at: https://open.kattis.com/problems/basketballoneonone

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

int main() 
{
    fastIO();
    
    string records;
    
    cin >> records;
    
    cout << records[ sz(records)-2 ] << endl;

    return 0;
}