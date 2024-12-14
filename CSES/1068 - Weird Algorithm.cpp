/*
    The following is an original solution to the problem: 1068 - "Weird Algorithm" of CSES Problemset.
    Rated difficulty: 118083 / 123729. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://cses.fi/problemset/task/1068

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {

    fastIO();

    ll n;

    cin >> n;

    cout << n << " ";

    while(n != 1) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3;
            n++;
        }

        cout << n << " ";
    }

    return 0;
}