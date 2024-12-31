/*
    The following is an original solution to the problem: 1923-A "Moving Chips" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1923/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class Chips {
    public static void main(String[] args) {
        int size;
        Scanner input = new Scanner(System.in);

        int testCases = input.nextInt();

        for(int i = 0; i < testCases; i++) {
            size = input.nextInt();
            int[] chips = new int[size];
            for(int j = 0; j < size; j++)
                chips[j] = input.nextInt();
            solve(chips, size);
        }

        input.close();
    }

    public static void solve(int[] chips, int size) {
        int operations = 0, firstChip = -1, lastChip = -1, spaces = 0;

        for(int i = 0; i < size; i++) {
            if(chips[i] != 0) {
                firstChip = i;
                break;
            }
        }

        for(int i = size-1; i >= 0; i--) {
            if(chips[i] != 0) {
                lastChip = i;
                break;
            }
        }

        for(int i = firstChip; i <= lastChip; i++) {
            if(chips[i] == 0)
                spaces++;
        }

        operations = spaces;

        System.out.println(operations);
    }
}