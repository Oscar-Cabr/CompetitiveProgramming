/*
    The following is an original solution to the problem: 1069 - "Repetitions" of CSES Problemset.
    Rated difficulty: 88153 / 92098. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://cses.fi/problemset/task/1069

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

    int sol = 1, temp = 1;
    char last = '0';
    
    string str;
    cin >> str;

    for( int i = 0; i < (int)str.size(); i++ )
    {
        if( str[ i ] == last )
        {
            temp++;
        }
        else
        {
            sol = max( sol, temp );
            temp = 1;
        }
        last = str[ i ];
    }
    sol = max( sol, temp );

    cout << sol << endl;
    
    return 0;
}