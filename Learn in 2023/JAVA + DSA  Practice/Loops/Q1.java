import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        int num;
        int choice;
        int evenSum = 0;
        int oddSum = 0;
        Scanner sc = new Scanner(System.in);

        do{
            System.out.print("Enter number : ");
            num = sc.nextInt();

            if(num % 2 == 0){
                evenSum += num;
            }else{
                oddSum += num;
            }

            System.out.print("Do you want to continue adding numbers (1-0) : ");
            choice = sc.nextInt();
        }while(choice == 1);

        System.out.println("Even sum is : " + evenSum);
        System.out.println("Even odd is : " + oddSum);

        sc.close();
    }
}
