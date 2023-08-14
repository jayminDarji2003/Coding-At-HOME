/*
     function_methods
 */

import java.util.Scanner;

class function_methods {

    public static void printMyName(String name){
        System.out.println("Your name is : " +name);
        return;
    }

    public static void main(String[] args) {
        Scanner sc1 = new Scanner(System.in);
        System.out.print("Enter your name : ");
        String name = sc1.next();

        printMyName(name);
    }   
}