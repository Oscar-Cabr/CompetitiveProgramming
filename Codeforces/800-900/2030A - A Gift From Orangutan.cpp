/*
    The following is an original solution to the problem: 2030-A "A Gift From Orangutan" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Greedy, Math.

    Check out the problem at: https://codeforces.com/contest/2030/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;
#define endl '\n'
#define fi first
#define se second
const int INFTY = INT_MAX;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(int n, int min, int max)
{
    int sol;
    if(n == 1)
        sol = 0;
    else
        sol = (n - 1) * (max - min);
    cout << sol << endl;
}

int main()
{
    fastIO();
    
    int testCases, n, min, max;

    cin >> testCases;

    for(int i = 0; i < testCases; i++)
    {
        max = -1;
        min = INFTY;

        cin >> n;

        vector<int> vec(n);

        for(int j = 0; j < n; j++)
        {
            cin >> vec[j];
            max = vec[j] > max ? vec[j] : max;
            min = vec[j] < min ? vec[j] : min;
        }

        solve(n, min, max);
    }
    
    return 0;
}