/*
    The following is an original solution to the problem: 1927-B "Following the String" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Constructive Algorithms, Strings.

    Check out the problem at: https://codeforces.com/contest/1927/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef __int128 sll;
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
void printVector( auto& v ){ fori(i,0,sz(v)) cout << v[i] << " "; cout << endl; }
void fastIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

void solve( int n, vi& a )
{
    map<int, queue<char>> letters;
    int nextLetter = 97;
    string sol(n,'-');
    char temp;
    
    for( int i = n-1; i >= 0; i-- )
    {
        if( sz( letters[ a[i] ] ) )
        {
            temp = letters[ a[i] ].front();
            letters[ a[i] ].pop();
            letters[ a[i]-1 ].push( temp );
            sol[i] = temp;
        }
        else
        {
            temp = (char)(nextLetter++);
            sol[i] = temp;
            letters[ a[i]-1 ].push( temp );
        }
    }
    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, n;
    
    cin >> tc;
    
    fori(t,0,tc)
    {
        cin >> n;
        vi nums(n);
        fori(i,0,n)
            cin >> nums[i];
        solve(n, nums);
    }

    return 0;
}