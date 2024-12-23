/*
    The following is an original solution to the problem: 4-A "Watermelon" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc.

    Check out the problem at: https://codeforces.com/contest/4/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;
#define endl '\n'
#define fi first
#define se second
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
    
    int n;
    cin >> n;

    if( n % 2 == 0 && n > 2 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}