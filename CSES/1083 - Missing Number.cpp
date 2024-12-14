/*
    The following is an original solution to the problem: 1083 - "Missing Number" of CSES Problemset.
    Rated difficulty: 101142 / 106466. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://cses.fi/problemset/task/1083

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>

using namespace std;
#define endl '\n'
#define fi first
#define se second

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastIO();

    long long n;
    long long temp;
    
    cin >> n;
    
    long long sol = ( n * (n+1) ) /2;
    
    for(long long i = 1; i < n; i++)
    {
        cin >> temp;
        sol -= temp;
    }
    
    cout << sol << endl;
}