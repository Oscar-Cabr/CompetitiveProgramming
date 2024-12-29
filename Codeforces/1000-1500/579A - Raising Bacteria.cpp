/*
    The following is an original solution to the problem: 579-A "Raising Bacteria" of Codeforces.
    Rated difficulty: 1000. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Bit Manipulation.

    Check out the problem at: https://codeforces.com/contest/579/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    cout << __builtin_popcount(x) << endl;

    return 0;
}