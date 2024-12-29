/*
    The following is an original solution to the problem: 519-B "A and B Compilation Errors" of Codeforces.
    Rated difficulty: 1100. Language: C++20 (GCC 13-64).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Implementation, Sorting.

    Check out the problem at: https://codeforces.com/contest/519/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n-1);
    vector<int>c(n-2);
    
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(i=0; i<n-1; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    for(i=0; i<n-2; i++)
    {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    for(i=0; i<=n-1; i++)
    {
        if(a[i] != b[i]) {
            cout<<a[i]<<endl;
            break;
        } else if(i == n-1){
            cout<<a[n-1]<<endl;
        }
    }
    for(i=0; i<=n-2; i++)
    {
        if(b[i] != c[i]) {
            cout<<b[i]<<endl;
            break;
        } else if(i == n-2){
            cout<<b[n-2]<<endl;
        }
    }   
}