/*
    The following is an original solution to the problem: 1621 - "Distinct Numbers" of CSES Problemset.
    Rated difficulty: 56925 / 61974. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://cses.fi/problemset/task/1621

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <bits/stdc++.h>

int main() {
    int n, number;
    std::set<int> aSet;
    
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> number;
        aSet.insert(number);
    }
    
    std::cout << aSet.size() << std::endl;
    
    return 0;
}