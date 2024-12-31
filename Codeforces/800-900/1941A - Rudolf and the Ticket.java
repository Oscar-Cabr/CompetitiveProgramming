/*
    The following is an original solution to the problem: 1941-A "Rudolf and the Ticket" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Brute Force.

    Check out the problem at: https://codeforces.com/contest/1941/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class Rudolf {
    public static void main(String[] args) {
        int maxValue, leftSize, rightSize;

        Scanner input = new Scanner(System.in);

        int testCases = input.nextInt();
        for(int i = 0; i < testCases; i++) {
            leftSize = input.nextInt();
            rightSize = input.nextInt();
            int[] leftPocket = new int[leftSize];
            int[] rightPocket = new int[rightSize];
            maxValue = input.nextInt();

            for(int j = 0; j < leftSize; j++)
                leftPocket[j] = input.nextInt();
            for(int j = 0; j < rightSize; j++)
                rightPocket[j] = input.nextInt();

            solve(leftSize, leftPocket, rightSize, rightPocket, maxValue);
        }

        input.close();
    }

    public static void solve(int leftSize, int[] leftPocket, int rightSize, int[] rightPocket, int maxValue) {
        int possiblyWays = 0;

        for(Integer leftCoin : leftPocket)
            for(Integer rightCoin : rightPocket)
                if(leftCoin + rightCoin <= maxValue)
                    possiblyWays++;

        System.out.println(possiblyWays);
    }
}