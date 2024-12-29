/*
    The following is an original solution to the problem: GYM 553339-F "CAPDK 2024" of Codeforces.
    Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Strings.

    Check out the problem at: https://codeforces.com/gym/553339/problem/F

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >>  n;
    if(n<=9){
        cout << "Individual" << endl;
    } else 
        cout << "Team" << endl;
}

int main() {
    fastIo();
    solve();
}