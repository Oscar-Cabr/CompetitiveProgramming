/*
    The following is an original solution to the problem: 1941-A "Rudolf and the Ugly String" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Strings.

    Check out the problem at: https://codeforces.com/contest/1941/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, count = 0;
    string s;
    cin >> n;
    cin >> s;
    vector<bool> e(n, false);

    for (int i = 0; i < n; i++) {
        if (i + 5 <= n) {
            if (s.substr(i, 5) == "mapie") {
                e[i + 2] = true;
                count++;
            }
        }

        if (i + 2 <= n) {
            if (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie") {
                if (e[i] == true || e[i + 2] == true){
                    continue;
                } else {
                    e[i + 1] = true;
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}