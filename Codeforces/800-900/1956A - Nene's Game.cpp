/*
    The following is an original solution to the problem: 1956-A "Nene's Game" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1956/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    
    cin >> testCases;
    
    for(int i = 0; i < testCases; i++)
    {
        int nKicks, nPlayers, lessKick, temp;
        
        cin >> nKicks >> nPlayers;

        cin >> lessKick;
        
        for(int j = 1; j < nKicks; j++)
        {
            cin >> temp;
        }
        
        for(int j = 0; j < nPlayers; j++)
        {
            cin >> temp;
            if(temp < lessKick)
                cout << temp << " ";
            else
                cout << lessKick - 1 << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}