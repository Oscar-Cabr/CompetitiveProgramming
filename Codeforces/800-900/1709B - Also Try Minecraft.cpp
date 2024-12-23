/*
    The following is an original solution to the problem: 1709-B "Also Try Minecraft" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Prefix Sum, Suffix Sum, Dynamic Programming.

    Check out the problem at: https://codeforces.com/contest/1709/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve( vector<ll>& prefix, vector<ll>& suffix, int ini, int fin) {
    ll sol = 0;
    
    if( ini < fin ) {
        sol = prefix[fin] - prefix[ini];
    }
    else {
        sol = suffix[fin] - suffix[ini];
    }

    cout << sol << endl;
}

int main() {

    fastIO();

    int worldSize, queries;

    cin >> worldSize >> queries;

    vector<int> world( worldSize + 1, 0 );
    vector<ll> prefixSum( worldSize + 1, 0 );
    vector<ll> suffixSum( worldSize + 1, 0 );

    for(int i = 1; i <= worldSize; i++) {
        cin >> world[i];
        if( world[i] < world[i-1] )
            prefixSum[i] = prefixSum[i-1] + world[i-1] - world[i];
        else
            prefixSum[i] = prefixSum[i-1];
    }

    for(int i = worldSize-1; i > 0; i--) {
        if( world[i] < world[i+1] )
            suffixSum[i] = suffixSum[i+1] + world[i+1] - world[i];
        else
            suffixSum[i] = suffixSum[i+1];
    }

    for(int i = 0; i < queries; i++) {
        int ini, fin;

        cin >> ini >> fin;

        solve(prefixSum, suffixSum, ini, fin);
    }

    return 0;
}