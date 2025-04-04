/*
    The following is an original solution to the problem: ABC389-C "Snake Queue" of AtCoder.
    Score: 300 points. Language: C++20 (gcc 12.2).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Deque, Queue.

    Check out the problem at: https://atcoder.jp/contests/abc389/submit?taskScreenName=abc389_c

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

int main()
{
    fastIO();
    
    deque<pll> snakes; // fi = coord, se = length
    ll leaved = 0;
    int nQueries, queryType, querie;
    
    cin >> nQueries;
    
    fori(n,0,nQueries)
    {
      cin >> queryType;
      if( queryType != 2 )
        cin >> querie;
      
      switch( queryType )
      {
        case 1:
          if( snakes.empty() )
             snakes.pb( {0, querie} );
          else
              snakes.pb( {snakes.back().fi + snakes.back().se, querie} );
          break;
          
        case 2: 
          leaved += snakes.front().se;
          snakes.pop_front();
          break;
          
        case 3: 
          cout << snakes[ querie - 1 ].fi - leaved << endl;
      }
    }
 
    return 0;
}