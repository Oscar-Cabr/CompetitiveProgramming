/*
    The following is an original solution to the problem: 2025-B "Binomial Coefficients, Kind Of" of Codeforces.
    Rated difficulty: 1100. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Maths, Binpow.

    Check out the problem at: https://codeforces.com/contest/2025/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<vector<pi>> vvpi;
#define MOD % (1000000000 + 7)

ll binpow(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans=(ans  * a  ) MOD;
        }
        a = (   a * a )MOD ;
        b >>=1;
    }
    return ans ;
}


void solve() {
    int t;
    cin >> t;
    vector<pair<ll, ll>> p(t);
    for(int i = 0; i < t; i++){
        cin >> p[i].F;
    }
    for(int i = 0; i < t; i++){
        cin >> p[i].S;
    }
    for(int i = 0; i < t; i++){
        cout << binpow(2, p[i].S) << '\n';
    }
}

int main() {
    fastIo();
    solve();
}