/*
    The following is an original solution to the problem: 739 - "Daily Temperatures" of LeetCode.
    Rated difficulty: Medium. Language: C++.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Stack.

    Check out the problem at: https://leetcode.com/problems/daily-temperatures/description/

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        int n = (int)temperatures.size();
        vector<int> sol(n,0);

        s.push( {temperatures[n-1], n-1} );
        for( int i = n-2; i >= 0; i-- )
        {
            while( ! s.empty() && temperatures[i] >= s.top().first )
                s.pop();
            if( ! s.empty() )
                sol[i] = s.top().second - i;
            s.push( {temperatures[i], i} );
        }

        return sol;
    }
};