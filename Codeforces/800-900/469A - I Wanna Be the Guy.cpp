/*
    The following is an original solution to the problem: 469-A "I Wanna Be the Guy" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/469/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include<iostream>
#include<set>

int main() {
    int totalNumbers, number, xLevels, yLevels;
    std::set<int> numbers;
    
    std::cin >> totalNumbers;
    
    std::cin >> xLevels;
    for(int i = 0; i < xLevels; i++) {
        std::cin >> number;
        numbers.insert(number);
    }
    
    std::cin >> yLevels;
    for(int i = 0; i < yLevels; i++) {
        std::cin >> number;
        numbers.insert(number);
    }
    
    if(numbers.size() == totalNumbers)
        std::cout << "I become the guy." << std::endl;
    else
        std::cout << "Oh, my keyboard!" << std::endl;

    return 0;
}