/*
    The following is an original solution to the problem: 746-A "Decoding" of Codeforces.
    Rated difficulty: 900. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Strings.

    Check out the problem at: https://codeforces.com/contest/746/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    string sol = "", str;
    
    cin >> n; 
    cin >> str;
    
    int size = str.size();
    
    for(int i = 0; i < size; i++) {
        sol.insert(sol.size()/2, str.substr(str.size()-1));
        str.erase(str.size()-1, 1);
    }
    
    cout << sol;
    
    return 0;
}