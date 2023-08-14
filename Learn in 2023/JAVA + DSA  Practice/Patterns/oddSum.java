import java.util.Scanner;

public class oddSum {
    public static void sumOdd(int n){
        int oddSum = 0;
        int evenSum = 0;

        for(int i=1; i<=n; i++){
            if(i % 2 == 0){
                evenSum += i;
            }else{
                oddSum += i;
            }
        }
        System.out.println("Sum of odd numbers is : " + oddSum);
        System.out.println("Sum of even numbers is : " + evenSum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n : ");
        int n = sc.nextInt();

        sumOdd(n);
        sc.close();
    }
}
