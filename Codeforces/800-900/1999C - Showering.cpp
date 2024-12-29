/*
    The following is an original solution to the problem: 1999-C "Showering" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Greedy, Implementation.

    Check out the problem at: https://codeforces.com/contest/1999/problem/C

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll testCases, last, events, showerTime, minutesDay;
    bool done;

    cin >> testCases;
    
    for(ll i = 0; i < testCases; i++)
    {
        last = 0;
        done = false;
        
        cin >> events >> showerTime >> minutesDay;
        
        for(ll j = 0; j < events; j++)
        {
            ll l, r;
            cin >> l;
            if(l - last >= showerTime)
            {
                done = true;
            }
            last = l;
            cin >> last;
        }
        
        if( !done )
            if( minutesDay - last >= showerTime )
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}