/*
    The following is an original solution to the problem: 1703-B "ICPC Balloons" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1703/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.ArrayList;
import java.util.Scanner;

public class Balloons{

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int testCases = input.nextInt();

        for(int i = 0; i < testCases; i++) {
            solve(input.nextInt(), input.next());
        }

        input.close();
    }

    public static void solve(int length, String balloons) {
        ArrayList<Character> completed = new ArrayList<Character>();
        int score = 0;

        for(int i = 0; i < length; i++) {
            if(completed.contains(balloons.charAt(i)))
                score += 1;
            else {
                score += 2;
                completed.add(balloons.charAt(i));
            }
        }

        System.out.println(score);
    }
}