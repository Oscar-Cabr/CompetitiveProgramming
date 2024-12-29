/*
    The following is an original solution to the problem: 270-A "Fancy Fence" of Codeforces.
    Rated difficulty: 1100. Language: GNU C11.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Math, Implementation, Geometry.

    Check out the problem at: https://codeforces.com/contest/270/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include<stdio.h>

void solve(int);

int main() {
    int testCases, i, degrees;
    scanf("%d",&testCases);
    for(i = 0; i < testCases; i++) {
        scanf("%d",&degrees);
        solve(degrees);
    }

    return 0;
}

void solve(int degrees) {
    int sizes;
    sizes = 360/(180-degrees);
    if((180*(sizes-2))/sizes == degrees) {
        printf("YES\n");
    }
    else
        printf("NO\n");
}