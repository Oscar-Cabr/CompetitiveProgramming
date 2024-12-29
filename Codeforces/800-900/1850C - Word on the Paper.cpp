/*
    The following is an original solution to the problem: 1850-C "Word on the Paper" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Strings.

    Check out the problem at: https://codeforces.com/contest/1850/problem/C

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
typedef long long ll;
typedef vector<ll> vll;
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

int main()
{
    fastIO();
    
    int tc;
    string subsol, str;
    vector<string> sol;
    
    cin >> tc;
    
    fori(i,0,tc)
    {
        subsol = "";
        fori(j,0,8)
        {
            cin >> str;
            fori(k,0,8)
            {
                if(str[k] != '.')
                {
                    subsol += str[k];
                    break;
                }
            }
        }
        sol.pb(subsol);
    }
    
    fori(i,0,(sz(sol)))
        cout << sol[i] << endl;

    return 0;
}