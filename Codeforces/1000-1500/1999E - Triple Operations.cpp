/*
    The following is an original solution to the problem: 1999-E "Triple Operations" of Codeforces.
    Rated difficulty: 1300. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Prefix Sum, Math.

    Check out the problem at: https://codeforces.com/contest/1999/problem/E

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> prefix(200005);

void solve(int l, int r) {
    int sol = 0;
    
    sol = prefix[r] - prefix[l - 1] + 1 + floor(log2(l) / log2(3));

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    prefix[0] = 0;
    for(int i = 1; i < 200005; i++) {
        prefix[i] = prefix[i - 1] + floor(log2(i) / log2(3)) + 1;
    }

    int t;
    cin >> t;
    
    while(t--) {
        int l, r;
        cin >> l >> r;

        solve(l, r);
    }

    return 0;
}