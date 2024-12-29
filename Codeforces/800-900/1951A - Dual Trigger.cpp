/*
    The following is an original solution to the problem: 1951-A "Dual Trigger" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1951/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

using namespace std;
typedef vector<int> vi;
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(a) (int)a.size()
#define fori(i,a,n) for(int i = a; i < n; i++)
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( int n, string lamps )
{
    string sol = "YES";
    int on = 0;
    
    fori(i,0,n)
        if( lamps[i] == '1' )
            on++;
            
    if( n == 1 || n == 2 )
        sol = ( on == 0 ) ? "YES" : "NO";
    else if( n == 3 )
        sol = ( on == 0 || lamps == "101" ) ? "YES" : "NO";
    else
    {
        if( on == 0 )
            sol = "YES";
        else if( on % 2 != 0 )
            sol = "NO";
        else if( on > 2 )
            sol = "YES";
        else
        {
            fori(i,0,(n-1))
                if( lamps[i] == '1' && lamps[i+1] == '1')
                {
                    sol = "NO";
                    break;
                }
        }
    }

    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int tc, n;
    string lamps;

    cin >> tc;
    
    fori(i,0,tc)
    {
        cin >> n >> lamps;
        
        solve(n, lamps);
    }
    
    return 0;
}