/**
 * question_3
 */

import java.util.*;

public class question_3 {

    public static void calculateFactorial(int num){
        int factorial=1;
        for(int i = num; i>=1; i--){
            factorial = factorial * i;
        }

        System.out.println("The factorial is : " + factorial);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter num : ");
        int num = sc.nextInt();

        calculateFactorial(num);
    }
}