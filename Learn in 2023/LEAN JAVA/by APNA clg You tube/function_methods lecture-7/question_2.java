import java.util.Scanner;

public class question_2 {

    public static int calculateProduct(int a , int b){
        return a * b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a : ");
        int a = sc.nextInt();

        System.out.print("Enter b : ");
        int b = sc.nextInt();

        int product = calculateProduct(a , b);
        System.out.print("The product is : " + product);

    }
}
