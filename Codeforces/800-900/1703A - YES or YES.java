/*
    The following is an original solution to the problem: 1703-A "YES or YES?" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1703/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class Yes {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int testCases = input.nextInt();

        for(int i = 0; i < testCases; i++)
            solve(input.next());

        input.close();
    }

    public static void solve(String string) {
        boolean isYes = true;

        if(string.charAt(0) != (char)89 && string.charAt(0) != (char)121)
            isYes = false;
        if(string.charAt(1) != (char)69 && string.charAt(1) != (char)101)
            isYes = false;
        if(string.charAt(2) != (char)83 && string.charAt(2) != (char)115)
            isYes = false;

        if(isYes)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}