/*
    The following is an original solution to the problem: 118-A "String Task" of Codeforces.
    Rated difficulty: 1000. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Strings, Implementation.

    Check out the problem at: https://codeforces.com/contest/118/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class StringTask {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String string = input.nextLine();

        solve(string.toLowerCase());

        input.close();
    }

    public static void solve(String string) {
        String task = "";

        for(int i = 0; i < string.length(); i++) {
            if(!isVowel(string.charAt(i))) {
                task += ".";
                task += string.charAt(i);
            }
        }

        System.out.println(task);
    }

    public static boolean isVowel(char letter) {
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y')
            return true;
        else
            return false;
    }
}