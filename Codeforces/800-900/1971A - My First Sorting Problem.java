/*
    The following is an original solution to the problem: 1971-A "My First Sorting Problem" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1971/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class FirstSorting {
    public static void main(String[] args) {
        int a, b;
        Scanner input = new Scanner(System.in);

        int testCases = input.nextInt();

        for(int i = 0; i < testCases; i++) {
            a = input.nextInt();
            b = input.nextInt();

            solve(a,b);
        }
        
        input.close();
    }

    public static void solve(int a, int b) {
        if(a > b)
            System.out.println(b + " " + a);
        else
            System.out.println(a + " " + b);
    }
}