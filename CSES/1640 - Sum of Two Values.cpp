/*
    The following is an original solution to the problem: 1640 - "Sum of Two Value" of CSES Problemset.
    Rated difficulty: 39563 / 44707. Language: C++ (C++20).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Sorting, Two Pointers.

    Check out the problem at: https://cses.fi/problemset/task/1640

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
    
    int n, target, x0 = 0, x1;
    cin >> n >> target;
    vii nums(n); // num - idx
    x1 = n-1;

    fori(i,0,n)
    {
        cin >> nums[i].fi;
        nums[i].se = i+1;
    }
    sort(all(nums));
    while( x0 < x1 && nums[x0].fi + nums[x1].fi != target )
    {
        if( nums[x0].fi + nums[x1].fi < target )
            x0++;
        else if( nums[x0].fi + nums[x1].fi > target )		
            x1--;
    }
    if( nums[x0].fi + nums[x1].fi != target || x0 == x1 )
        cout << "IMPOSSIBLE" << endl;
    else
        cout << nums[x0].se << " " << nums[x1].se << endl;

    return 0;
}