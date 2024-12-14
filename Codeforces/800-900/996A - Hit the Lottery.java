/*
    The following is an original solution to the problem: 1068-A "Hit the Lottery" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Greedy.

    Check out the problem at: https://codeforces.com/contest/996/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class Lottery {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        solve(input.nextInt());

        input.close();
    }

    public static void solve(int number) {
        int bills = 0;

        bills += number / 100;
        number %= 100;
        bills += number / 20;
        number %= 20;
        bills += number / 10;
        number %= 10;
        bills += number / 5;
        number %= 5;
        bills += number / 1;
        System.out.println(bills);
    }
}