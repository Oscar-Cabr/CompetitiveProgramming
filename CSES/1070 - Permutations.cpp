/*
    The following is an original solution to the problem: 1070 - "Permutations" of CSES Problemset.
    Rated difficulty: 72593 / 75027. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://cses.fi/problemset/task/1070

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

    if( n < 4 )
    {
        if( n == 1 )
            cout << "1" << endl;
        else
            cout << "NO SOLUTION" << endl;
    }
    else
    {
        for( int i = 2; i <= n; i += 2 )
            cout << i << " ";
        for( int i = 1; i <= n; i += 2 )
            cout << i << " ";
    }
    
    return 0;
}