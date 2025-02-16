/*
    The following is an original solution to the problem: 1 - "Two Sum" of LeetCode.
    Rated difficulty: Easy. Language: C++.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Sortings, Two Pointers.

    Check out the problem at: https://leetcode.com/problems/two-sum/description/

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x0 = 0, x1 = (int)nums.size()-1, sum = INT_MAX;
        vector<pair<int,int>> sol( (int)nums.size() );

        for( int i = 0; i < (int)nums.size(); i++ )
            sol[i] = { nums[i], i };
        sort( sol.begin(), sol.end() );

        while( x0 < x1 && sum != target )
        {
            sum = sol[x0].first + sol[x1].first;
            if( sum < target )
                x0++;
            else if( sum > target )
                x1--;
        }

        return vector<int>({ sol[x0].second, sol[x1].second});
    }
};