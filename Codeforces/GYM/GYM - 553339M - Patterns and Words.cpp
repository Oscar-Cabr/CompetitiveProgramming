/*
    The following is an original solution to the problem: GYM 553339-M "Patterns and Words" of Codeforces.
    Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Strings.

    Check out the problem at: https://codeforces.com/gym/553339/problem/M

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    string s1, s2;
    map<string, string> mp;
    for( int i = 0; i < n; i++ ) {
        cin >> s1;
        cin >> s2;
        mp[s1] = s2;
    }
    string p;
    cin >> m;
    for( int i = 0; i < m; i++ ) {
        cin >> s1;
        p = "";
        for(int j = 0; j<s1.size(); j++) {
            //it's a digit
            if( s1[j] >= 48 && s1[j] <= 57 ) {
                p.append("d");
            } else if( s1[j] >= 97 && s1[j] <= 122 ) {
                p.append("l");
            } else if( s1[j] >= 65 && s1[j] <= 90 ) {
                p.append("u");
            }
        }
        if( mp.find(p) != mp.end() ) {
            cout << mp[p] << '\n';
        } else 
            cout << "Liar!" << '\n';
        
    }
    // 48-57 -> digits
    // 65-90 -> mayus
    // 97-122 -> minus
}

int main() {
    fastIo();
    solve();
}