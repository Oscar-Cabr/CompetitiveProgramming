/*
    The following is an original solution to the problem: 2042-B "Game with Colored Marbles" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Game Theory, Greedy.

    Check out the problem at: https://codeforces.com/contest/2042/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef __int128 sll;
typedef tuple<int,int,bool> tiib;
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(a) (int)a.size()
#define fori(i,a,n) for(int i = a; i < n; i++)
const int MOD = 1e9+7;
const int INFTY = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 10e-9;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( map<int,int>& marbles )
{
    int ones = 0, sol = 0;

    for( ii mapPair : marbles )
    {
        if( mapPair.se == 1 )
            ones++;
    }
    
    sol += 2 * ceil( ones / 2.0 );
    sol += sz(marbles) - ones;

    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, n;

    cin >> tc;

    fori(i,0,tc)
    {
        cin >> n;
        map<int,int> marbles;
        int temp;
        fori(j,0,n)
        {
            cin >> temp;
            if( marbles.find(temp) == marbles.end() )
            {
                marbles[temp] = 1;
            }
            else
            {
                marbles[temp]++;
            }
        }
        solve( marbles );
    }
    
    return 0;
}