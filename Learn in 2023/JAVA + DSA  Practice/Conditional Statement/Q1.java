import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter any number : ");
        int num = sc.nextInt();

        if (num > 0) {
            System.out.println("POSITIVE");
        }
        else if(num < 0){
            System.out.println("NEGATIVE");
        }
        else {
            System.out.println("NUMBER IS 0");
        }

        sc.close();
    }
}
