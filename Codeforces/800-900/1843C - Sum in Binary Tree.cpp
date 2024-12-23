/*
    The following is an original solution to the problem: 1843-C "Sum in Binary Tree" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Trees.

    Check out the problem at: https://codeforces.com/contest/1843/problem/C

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(long long n)
{
    long long sol = 0;
    
    while(n >= 1)
    {
        sol += n;
        n /= 2;
    }
    
    cout << sol << endl;
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    long long n;
    
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        solve(n);
    }
    
    return 0;
}