
// Here we are learning about the conditional statements

import java.util.Scanner;

class ConditionalStatement{
    public static void main(String args[]){

        // if else stament
        // Program :- To check you are eligible for vote or not

        /*
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your age : ");
        int age = sc.nextInt();
        if(age > 18){
            System.out.print("You can eligible for vote");
        }
        else{
            System.out.print("You can't eligible for vote");
        }
        */

        // nested if statements
        // Program :- Find greater number from three number

        /*
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter First number : ");
        int n1 = sc.nextInt();
        System.out.print("Enter second number : ");
        int n2 = sc.nextInt();
        System.out.print("Enter third number : ");
        int n3 = sc.nextInt();

        if(n1 > n2){
            if(n1 > n3){
                System.out.print("first is max number");
            }
            else{
                System.out.print("third is max number");
            }
        }
        else{
            if(n2 > n3){
                System.out.print("second is max number");
            }
            else{
                System.out.print("third is max number");
            }
        }
        */


        // if else-if
        // Program :- Number if positive , negative or zero

        /*
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number : ");
        int n = sc.nextInt();

        if(n > 0){
            System.out.print("Number is positive");
        }
        else if(n < 0){
            System.out.print("Number is negative");
        }
        else{
            System.out.print("Number is zero");
        }
        */



        // Switch statements
        // Program :- Making a calculator using java

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter First number : ");
        int n1 = sc.nextInt();
        System.out.print("Enter second number : ");
        int n2 = sc.nextInt();

        System.out.print("Enter choice (+,-,*,%,/) : ");
        String ch = sc.next();

        switch(ch){
            case "+":
                float sum = n1 + n2;
                System.out.print(sum);
                break;
            case "*":
                float sum1 = n1 * n2;
                System.out.print(sum1);
                break;
            case "/":
                float sum2 = n1 / n2;
                System.out.print(sum2);
                break;
            case "%":
                float sum3 = n1 % n2;
                System.out.print(sum3);
                break;
            case "-":
                float sum4 = n1 - n2;
                System.out.print(sum4);
                break;
        }







    }
}