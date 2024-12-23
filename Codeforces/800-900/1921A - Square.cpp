/*
    The following is an original solution to the problem: 1921-A "Square" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1921/problem/A

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
typedef long long ll;
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
    
    int tc, x, y, sol, size1, size2;
    
    cin >> tc;
    
    for(int i = 0; i < tc; i++ )
    {
        vector<pair<int,int>> dots;
        sol = 0;

        for(int j = 0; j < 4; j++)
        {
            cin >> x >> y;
            dots.push_back({x,y});
        }

        sort(dots.begin(), dots.end());
        size1 = dots[2].fi - dots[0].fi;
        
        std::sort(dots.begin(), dots.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second < b.second;
        });
        size2 = dots[2].se - dots[0].se;
        
        sol = size1 * size2;

        cout << sol << endl;
    }
    
    return 0;
}