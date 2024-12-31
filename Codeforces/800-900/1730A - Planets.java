/*
    The following is an original solution to the problem: 1730-A "Planets" of Codeforces.
    Rated difficulty: 800. Language: Java 21 64bit.
    This solution isn't secured as "the most efficient one", but it is secured as an Accepted one under the given constraints.
    Techniques / Topics involved: Adhoc, Implementation, Greedy.

    Check out the problem at: https://codeforces.com/contest/1730/problem/A

    The only purpose of doing this is to learn and improve my skills in competitive programming.
*/

import java.util.Scanner;

public class Planets {

    public static final int FIRST_MACHINE_COST = 1;
    public static void main(String[] args) {
        int numPlanets, machineCost;
        int[] orbits = new int[100];
        Scanner input = new Scanner(System.in);

        int testCases = input.nextInt();

        for(int i = 0; i < testCases; i++) {
            for(int j = 0; j < 100; j++)
                orbits[j] = 0;

            numPlanets = input.nextInt();
            machineCost = input.nextInt();
            for(int j = 0; j < numPlanets; j++)
                orbits[input.nextInt()-1]++;
            solve(orbits, numPlanets, machineCost);
        }

        input.close();
    }

    public static void solve(int[] orbits,int numPlanets,int machineCost) {
        int costs1, costs2 = 0;
        costs1 = FIRST_MACHINE_COST * numPlanets;
        
        for(int i = 0; i < 100; i++)
            if(orbits[i] != 0) {
                if(orbits[i] * FIRST_MACHINE_COST < machineCost)
                    costs2 += orbits[i] * FIRST_MACHINE_COST;
                else
                    costs2 += machineCost;
            }

        if(costs1 < costs2)
            System.out.println(costs1);
        else
            System.out.println(costs2);
    }
}