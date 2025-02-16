/*
    The following is an original solution to the problem: 1272-A "Yet Another Broken Keyboard" of Codeforces.
    Rated difficulty: 1200. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Combinatorics.

    Check out the problem at: https://codeforces.com/contest/1272/problem/C

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

void solve( int l, int r )
{
    int sol = ( l == 1 && r == 1 ) ? 1 : r - l;
    
    cout << sol << endl;
}

int main() 
{
    fastIO();
    
    ll sol = 0, n = 0;
    int size, nLetters;
    char temp;
    string str;
    set<char> letters;
    
    cin >> size >> nLetters >> str;
    str += '$';
    fori(i,0,nLetters)
    {
        cin >> temp;
        letters.insert( temp );
    }
    
    fori(i,0,sz(str))
    {
        if( letters.count( str[i] ) > 0 )
        {
            n++;
        }
        else
        {
            sol += ( n * (n+1) ) / 2;
            n = 0;
        }
    }
    
    cout << sol << endl;

    return 0;
}