/*
    The following is an original solution to the problem: 978-B "File Name" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Greedy, Strings.

    Check out the problem at: https://codeforces.com/contest/978/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, xs = 0, sol;
    string str;
    
    cin >> n >> str;
    
    int size = str.size();
    
    for(int i = 0; i < size; i++) {
        if(str[i] == 'x') {
            xs++;
        }
        else {
            if(xs >= 3) {
                sol += xs - 2;
            }
            xs = 0;
        }
    }
    if(xs >= 3) {
        sol += xs - 2;
    }
    
    cout << sol;
    
    return 0;
}