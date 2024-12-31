/*
    The following is an original solution to the problem: 894-A "QAQ" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/894/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class QAQ {

    public static int QAQs = 0;
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        solve(input.next());

        input.close();
    }

    public static void solve(String string) {

        for(int i = 0; i < string.length(); i++)
            if(string.charAt(i) == 'Q')
                searchForA(string.substring(i, string.length()));

        System.out.println(QAQs);
    }

    public static void searchForA(String string) {
        for(int i = 0; i < string.length(); i++)
            if(string.charAt(i) == 'A')
                searchForQ(string.substring(i, string.length()));
    }

    public static void searchForQ(String string) {
        for(int i = 0; i < string.length(); i++)
            if(string.charAt(i) == 'Q')
                QAQs++;
    }
}