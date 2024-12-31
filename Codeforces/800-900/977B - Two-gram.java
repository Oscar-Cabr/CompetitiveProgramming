/*
    The following is an original solution to the problem: 977-B "Two-gram" of Codeforces.
    Rated difficulty: 900. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation.

    Check out the problem at: https://codeforces.com/contest/977/problem/B

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;
import java.util.ArrayList;

public class TwoGram {

    private String twoGram;
    private int ammount;

    TwoGram(String twoGram) {
        this.twoGram = twoGram;
        this.ammount = 1;
    }

    public String getTwoGram() {
        return twoGram;
    }

    public void increment() {
        this.ammount++;
    }

    public int getAmmount() {
        return this.ammount;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int length = input.nextInt();
        String string = input.next();

        solve(length, string);

        input.close();
    }

    public static void solve(int length, String string) {
        String biggerTwoGram = "";
        int bigger = 0;
        ArrayList<TwoGram> twoGrams = new ArrayList<TwoGram>();

        for(int i = 0; i < length-1; i++) {
            String twoGram = "";
            twoGram += string.charAt(i);
            twoGram += string.charAt(i+1);

            if(! twoGram.isEmpty()) {
                boolean exists = false;
                for(TwoGram tg : twoGrams) {
                    if(twoGram.equals(tg.getTwoGram())) {
                        tg.increment();
                        exists = true;
                    }
                }
                if(!exists)
                        twoGrams.add(new TwoGram(twoGram));
            }
            else
                twoGrams.add(new TwoGram(twoGram));
        }

        for(TwoGram tg : twoGrams) {
            if(tg.getAmmount() > bigger) {
                bigger = tg.getAmmount();
                biggerTwoGram = tg.getTwoGram();
            }
        }

        System.out.println(biggerTwoGram);
    }
}