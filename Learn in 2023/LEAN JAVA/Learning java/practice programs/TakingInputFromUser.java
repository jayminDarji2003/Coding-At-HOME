import java.util.Scanner;

class TakingInputFromUser{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int age;
        System.out.print("Enter your age : ");

            // This is the first input taking method (to take intger value)
        age = sc.nextInt();

            //If we want to take float value so we use
        System.out.print("Enter floating value : ");
        float age1 = sc.nextFloat();

            // If we want to take string value so we use
        System.out.print("Enter your name : ");
        String name = sc.next();

        System.out.println(age);
        System.out.println(age1);
        System.out.println(name);
    }
}

