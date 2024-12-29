/*
    The following is an original solution to the problem: 2033-A "Sakurako and Kosuke" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation.

    Check out the problem at: https://codeforces.com/contest/2033/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define endl '\n'
#define fi first
#define se second
#define ll long long
const int MOD = 1e9+7;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve( int max )
{
    int acum = 0;
    int i = 1;
    
    while( abs(acum) < max )
    {
        int val = i * 2 - 1;
        if( i % 2 == 0 )
            acum -= val;
        else
            acum += val;
        i++;
    }
    
    if( i % 2 == 0 )
        cout << "Kosuke" << endl;
    else
        cout << "Sakurako" << endl;
}

int main()
{
    fastIO();

    int testCases;
    
    cin >> testCases;
    
    for(int i = 0; i < testCases; i++)
    {
        int max;
        cin >> max;
        
        solve( max );
    }

    return 0;
}