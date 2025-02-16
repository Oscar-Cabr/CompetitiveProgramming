/*
    The following is an original solution to the problem: 20 - "Valid Parentheses" of LeetCode.
    Rated difficulty: Easy. Language: C++.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Data Structures, Stack.

    Check out the problem at: https://leetcode.com/problems/valid-parentheses/description/

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

class Solution {
public:
    bool isValid(string s)
    {
        stack<char> parentheses;
        parentheses.push('.');
        bool sol = true;

        for( int i = 0; i < (int)s.size() && sol; i++ )
        {
            if( isOpening( s[i] ) )
                parentheses.push( s[i] );
            else
            {
                if( isItsPair( parentheses.top(), s[i] ) )
                    parentheses.pop();
                else
                    sol = false;
            }
        }
        if( parentheses.top() != '.' )
            sol = false;

        return sol;
    }

    bool isOpening( char p )
    {
        if( p == '(' || p == '[' || p == '{' )
            return true;
        else
            return false;
    }

    bool isItsPair( char a, char b )
    {
        if( a == '(' && b == ')' || a == '[' && b == ']' || a == '{' && b == '}' )
            return true;
        else
            return false;
    }
};