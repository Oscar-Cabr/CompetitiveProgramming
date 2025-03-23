/*
    The following is an original solution to the problem: 2-A "Winner" of Codeforces.
    Rated difficulty: 1500. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Hashing, Implementation.

    Check out the problem at: https://codeforces.com/contest/2/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

// Racso programmed here
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
    
    int n, maxScore = 0, s;
    cin >> n;
    vector<pair<string,int>> originalGame(n);
    map<string,int> finalScores, simulation;
    set<string> possibleWinners;
    string sol, p;
    
    fori(i,0,n)
        cin >> originalGame[i].fi >> originalGame[i].se;
        
    fori(i,0,n)
        finalScores[ originalGame[i].fi ] += originalGame[i].se;
        
    for(pair<string,int> player : finalScores) 
        maxScore = max(maxScore, player.se);
        
    for(pair<string,int> player : finalScores)
        if( player.se == maxScore )
            possibleWinners.insert( player.fi );
    
    fori(i,0,n)
    {
        p = originalGame[i].fi;
        s = originalGame[i].se;
        simulation[ p ] += s;
        if( simulation[ p ] >= maxScore && possibleWinners.find( p ) != possibleWinners.end() )
        {
            sol = p;
            break;
        }
    }
        
    cout << sol << endl;

    return 0;
}