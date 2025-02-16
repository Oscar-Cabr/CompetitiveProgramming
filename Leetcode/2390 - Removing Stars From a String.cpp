/*
    The following is an original solution to the problem: 2390 - "Removing Stars From a String" of LeetCode.
    Rated difficulty: Medium. Language: C++.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Stack.

    Check out the problem at: https://leetcode.com/problems/removing-stars-from-a-string/description/

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

class Solution {
public:
    string removeStars(string s) {
        stack<char> word;
        string sol = "";

        for( int i = 0; i < (int)s.size(); i++ )
        {
            if( s[i] == '*' )
                word.pop();
            else
                word.push( s[i] );
        }
        
        while( ! word.empty() )
        {
            sol.insert( sol.begin(), word.top() );
            word.pop();
        }

        return sol;
    }
};