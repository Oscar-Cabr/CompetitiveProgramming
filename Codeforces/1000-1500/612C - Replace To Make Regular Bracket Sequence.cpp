/*
    The following is an original solution to the problem: 612-C "Replace To Make Regular Bracket Sequence" of Codeforces.
    Rated difficulty: 1400. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Stack.

    Check out the problem at: https://codeforces.com/contest/612/problem/C

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
void printVector( auto& v ){ fori(i,0,sz(v)) cout << v[i].fi << " " << v[i].se << " "; cout << endl; }
void fastIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

bool isOpening( char a )
{
    if( a == '(' || a == '{' || a == '[' || a == '<' )
        return true;
    else
        return false;
}

bool areOpposite( char a, char b )
{
    if( a == '(' && b == ')' || a == '[' && b == ']' || a == '{' && b == '}' || a == '<' && b == '>' )
        return true;
    else
        return false;
}

int main()
{
    fastIO();
    
    stack<char> parentheses;
    string s;
    int sol = 0;
    
    
    parentheses.push('.');
    
    cin >> s;
    
    for( int i = 0; i < sz(s) && sol != -1; i++ )
    {
        if( isOpening( s[i] ) )
            parentheses.push( s[i] );
        else if( sz(parentheses) == 1 )
            sol = -1;
        else
        {
            if( ! areOpposite( parentheses.top(), s[i] ) )
                sol++;
            parentheses.pop();
        }
    }
    if( sz(parentheses) != 1 )
        sol = -1;
    
    cout << ( sol == (-1) ? "Impossible" : to_string(sol) ) << endl;

    return 0;
}