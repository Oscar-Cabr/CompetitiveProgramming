/*
    The following is an original solution to the problem: 1930-A "Maximise The Score" of Codeforces.
    Rated difficulty: 800. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Greedy, Sortings, Constructive Algorithm.

    Check out the problem at: https://codeforces.com/contest/1930/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include<iostream>
#include<vector>
#include<algorithm>

void solve(std::vector<int>&, int);

int main() {
    int testCases, size;
    
    std::cin >> testCases;
    
    for(int i = 0; i < testCases; i++) {
        std::cin >> size;
        size *= 2;
        std::vector<int> numbers(size);
        for(int j = 0; j < size; j++)
            std::cin >> numbers[j];
        solve(numbers, size);
    }
    
    return 0;
}

void solve(std::vector<int>& numbers, int size) {
    int score = 0;
    
    sort(numbers.begin(), numbers.end());
    
    for(int i = 0; i < size; i += 2)
        score += numbers[i];
    
    std::cout << score << std::endl;
}