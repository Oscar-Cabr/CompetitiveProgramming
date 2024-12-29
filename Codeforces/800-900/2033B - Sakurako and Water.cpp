/*
    The following is an original solution to the problem: 2033-B "Sakurako and Water" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Constructive Algorithm.

    Check out the problem at: https://codeforces.com/contest/2033/problem/B

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

int maxi(int a, int b){
    if(a<b)
    return a;
    else return b;
}
void solve() {
    int n ;
    cin >> n;
    int a[n][n];
    vi b(2*n -1, INT_MAX);
    int corr=n-1, tmp;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        b[corr+i] = a[0][i];
        
    }
    corr--;
    for(int i =1; i<n; i++){
        for(int j=0; j<n; j++){
            tmp = a[i][j];
            b[corr+j] = maxi(a[i][j], b[corr+j]);
            
        }
        corr--;
        if(corr<0)
            corr = 2*n -2;
    }
    int mov=0;
    for(int i = 0; i< n*2 -1; i++){
        if(b[i]<0)
            mov+= abs(b[i]);
    }
    cout << mov << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}