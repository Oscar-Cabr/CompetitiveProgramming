/*
    The following is an original solution to the problem: 1907-A "Rook" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1907/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.ArrayList;
import java.util.Scanner;

public class Rook {
    public static void main(String[] args) {
        ArrayList<String> tests = new ArrayList<String>();
        Scanner input = new Scanner(System.in);

        int testCases = input.nextInt();

        for(int i = 0; i < testCases; i++)
            tests.add(input.next());

        for(String test : tests)
            solve(test);

        input.close();
    }

    public static void solve(String position) {
        for(int i = 1; i <= 8; i++) {
            if(i != (int)position.charAt(1)-'0') {
                System.out.print(position.charAt(0));
                System.out.println(i);
            }
        }
        for(int i = 97; i <= 104; i++) {
            char caracter = (char)i;
            if(position.charAt(0) != caracter) {
                System.out.print(caracter);
                System.out.println(position.charAt(1));
            }
        }
    }
}