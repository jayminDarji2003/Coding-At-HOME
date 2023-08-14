import java.util.Scanner;

public class question_1 {

    public static void calculateSum(int a, int b){
        int sum = a + b;
        System.out.println("The sum of two numbers is : " + sum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a : ");
        int a = sc.nextInt();

        System.out.print("Enter b : ");
        int b = sc.nextInt();

        calculateSum(a,b);
    }
}
