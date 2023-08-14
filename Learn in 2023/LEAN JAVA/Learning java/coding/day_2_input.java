import java.util.Scanner;

class day_2_input{
    public static void main(String[] args){
        int a;
        int b;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the value of a : ");
        a = sc.nextInt();
        System.out.println("Enter the value of b : ");
        b = sc.nextInt();

        int sum = a + b;
        System.out.println("The sum of two value is : ");
        System.out.println(sum);

    }
}