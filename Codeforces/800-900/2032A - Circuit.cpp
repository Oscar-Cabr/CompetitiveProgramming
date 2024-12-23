/*
    The following is an original solution to the problem: 2032-A "Cicuit" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Greedy, Math.

    Check out the problem at: https://codeforces.com/contest/2032/problem/A

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
    
    int testCases, ligths, sol, currentSwitch, min, max;

    cin >> testCases;

    for(int i = 0; i < testCases; i++)
    {
        sol = 0;
        cin >> ligths;
        for(int j = 0; j < ligths * 2; j++)
        {
            cin >> currentSwitch;
            if( currentSwitch == 1 )
                sol++;
        }

        min = sol % 2 == 0 ? 0 : 1;
        max = sol > ligths ? 2*ligths - sol : sol;
        cout << min << " " << max << endl;
    }
    
    return 0;
}