import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter price of Pencil : ");
        float p = sc.nextFloat();

        System.out.print("Enter price of Pen : ");
        float pen = sc.nextFloat();

        System.out.print("Enter price of earser : ");
        float e = sc.nextFloat();

        float total = (p + pen + e);
        float afterGST = total + (total * 0.18f);

        System.out.println("The total cost is : " + total);
        System.out.println("You have to pay after 18% GST : " + afterGST);

        sc.close();
    }
}
