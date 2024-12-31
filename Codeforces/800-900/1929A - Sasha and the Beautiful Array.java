/*
    The following is an original solution to the problem: 1929-A "Sasha and the Beautiful Array" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Sortings.

    Check out the problem at: https://codeforces.com/contest/1929/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;
import java.util.Arrays;

public class BeautifulArray {
    public static void main(String[] args) {
        int length;
        int[] array;
        Scanner input = new Scanner(System.in);

        int testCases = input.nextInt();

        for(int i = 0; i < testCases; i++) {
            length = input.nextInt();
            array = new int[length];

            for(int j = 0; j < length; j++)
                array[j] = input.nextInt();

            solve(array, length);
        }

        input.close();
    }

    public static void solve(int[] array, int length) {
        int sum = 0;

        Arrays.sort(array);

        for(int i = 1; i < length; i++)
            sum += array[i] - array[i-1];

        System.out.println(sum);
    }
}