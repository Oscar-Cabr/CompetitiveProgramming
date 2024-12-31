/*
    The following is an original solution to the problem: 1353-B "Two Arrays And Swaps" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/1353/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class Swap {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size, moves;

        int testCases = input.nextInt();

        for(int i = 0; i < testCases; i++) {
            size = input.nextInt();
            moves = input.nextInt();
            int[] array1 = new int[size];
            int[] array2 = new int[size];
            for(int j = 0; j < size; j++)
                array1[j] = input.nextInt();
            for(int j = 0; j < size; j++)
                array2[j] = input.nextInt();

            solve(array1, array2, size, moves);
        }

        input.close();
    }

    public static void solve(int[] array1, int[] array2, int size, int moves) {
        int smaller, bigger, sum = 0, aux;

        for(int i = 0; i < moves; i++) {
            smaller = bigger = 0;
            for(int j = 0; j < size; j++) {
                if(array1[j] < array1[smaller])
                    smaller = j;
                if(array2[j] > array2[bigger])
                    bigger = j;
            }
            if(array1[smaller] < array2[bigger]) {
                aux = array1[smaller];
                array1[smaller] = array2[bigger];
                array2[bigger] = aux;
            }
        }

        for(int i = 0; i < size; i++)
            sum += array1[i];

        System.out.println(sum);
    }
}