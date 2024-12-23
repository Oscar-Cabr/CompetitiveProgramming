/*
    The following is an original solution to the problem: 2036-A "Cicuit" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Adhoc.

    Check out the problem at: https://codeforces.com/contest/2036/problem/A

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

void solve( int n, vector<int>& notes )
{
    int melodie;
    bool isPerfect = true;
    for(int i = 1; i < n; i++)
    {
        melodie = abs( notes[i] - notes[i-1] );
        if( melodie != 5 && melodie != 7 )
        {
            isPerfect = false;
            break;
        }
    }
    if( isPerfect )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    
    int testCases, nNotes;
    cin >> testCases;

    for( int i = 0; i < testCases; i++ )
    {
        cin >> nNotes;
        vector<int> notes(nNotes);
        for( int j = 0; j < nNotes; j++ )
        {
            cin >> notes[ j ];
        }
        solve(nNotes, notes);
    }
    
    return 0;
}