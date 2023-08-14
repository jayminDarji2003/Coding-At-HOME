import  java.util.*;

public class MiniProject2 {
    public static void main(String[] args){
//        MINI PROJECT
        int myNumber = (int)(Math.random()*100);
        int userNumber = 0;
        Scanner sc = new Scanner(System.in);

        do{
            System.out.print("Guess my number : ");
            userNumber = sc.nextInt();

            if(myNumber == userNumber){
                System.out.println("WOW YOU GUESSED RIGHT NUMBER");
                break;
            }
            else if(userNumber > myNumber){
                System.out.println("Your number is too large");
            }
            else{
                System.out.println("Your number is too small");
            }
        }while (userNumber >= 0);

        System.out.println("My number was : " + myNumber);
    }
}
