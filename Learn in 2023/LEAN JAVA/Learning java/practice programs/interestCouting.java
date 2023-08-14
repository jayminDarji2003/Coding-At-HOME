import java.util.Scanner;

class interestCouting{
    public static void main(String args[]){
        int amount,years;
        float rateOfInterst,interest;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the amount : ");
        amount = sc.nextInt();

        System.out.print("Enter the no of years : ");
        years = sc.nextInt();

        System.out.print("Enter the rate of interest : ");
        rateOfInterst = sc.nextFloat();

        interest = (amount * years * rateOfInterst)/100;
        System.out.print("The interest is : " + interest);
    }
}