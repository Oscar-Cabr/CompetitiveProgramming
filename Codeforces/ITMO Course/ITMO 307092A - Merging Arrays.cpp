/*
    The following is an original solution to the problem: 307092-A "Merging Arrays" of Codeforces ITMO's Course, "Tow Pointers Method -> Step 1 -> Practice".
    Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Two Pointers.

    Check out the problem at: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include<iostream>
#include<string>

using namespace std;

string calculateDelay(string, float);

int main() {
    int size1, size2;
    cin >> size1;
    int a1[size1];
    cin >> size2;
    int a2[size2];
    
    for(int i = 0; i < size1; i++) {
        cin >> a1[i];
    }
    
    for(int i = 0; i < size2; i++) {
        cin >> a2[i];
    }
    
    int p1 = 0, p2 = 0;
    
    while (p1 < size1 && p2 < size2) {
        if(a1[p1] < a2[p2]) {
            cout << a1[p1] << " ";
            p1++;
        }
        else {
            cout << a2[p2] << " ";
            p2++;
        }
    }
    
    while(p1 < size1)
        cout << a1[p1++] << " ";
        
    while(p2 < size2)
        cout << a2[p2++] << " ";
        
    return 0;
}