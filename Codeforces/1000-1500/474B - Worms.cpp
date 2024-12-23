/*
    The following is an original solution to the problem: 747-B "Worms" of Codeforces.
    Rated difficulty: 1200. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Binary Search, Implementation.

    Check out the problem at: https://codeforces.com/contest/474/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n, k, acum = 0, right, mid, left, worm;
    
    cin >> n;
    
    vector<int> piles(n+1);
    piles[0] = 0;
    
    cin >> piles[1];
    acum += piles[1];
    
    for(int i = 2; i <= n; i++){
        cin >> piles[i];
        acum += piles[i];
        piles[i] = acum;
    }
    
    cin >> k;
    
    vector<int> worms(k);
    
    for(int i = 0; i < k; i++){
        cin >> worms[i];
    }
    
    for(int i = 0; i < k; i++){
        worm = worms[i];
        left = 1;
        right = n+1;
        
        while(right - left >= 1) {
            mid = left + (right - left) / 2;

            if( piles[mid] >= worm && worm > piles[mid - 1]) {
                cout << mid << endl;
                break;
            }
            else
                if( piles[mid] < worm )
                    left = mid + 1;
                else
                    right = mid;
        }
    }
    
    return 0;
}