/*
    The following is an original solution to the problem: 1094 - "Increasing Array" of CSES Problemset.
    Rated difficulty: 82748 / 86058. Language: C++ (C++11).
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://cses.fi/problemset/task/1094

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

#include <stdio.h>

int main() {
	int long size, i, moves = 0, difference;

	scanf("%ld",&size);

	int long array[size];

	scanf("%ld", &array[0]);
	for(i = 1; i < size; i++) {
		scanf("%ld",&array[i]);
		if(array[i-1] > array[i]) {
			difference = array[i-1] - array[i];
			moves += difference;
			array[i] += difference;
		}
	}
	printf("%ld", moves);

	return 0;
}