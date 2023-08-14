import java.util.*;

class program_1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int size = sc.nextInt();

        int[] marks = new int[size];

        for(int i=0; i<size; i++){
            System.out.print("Enter marks: ");
            marks[i] = sc.nextInt();
        }

        for(int i=0; i<size; i++){
            System.out.print("The marks is : ");
            System.out.println(marks[i]);
        }
    }
}