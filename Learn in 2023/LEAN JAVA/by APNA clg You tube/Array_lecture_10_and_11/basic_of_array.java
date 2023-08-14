import java.util.*;

class basic_of_array{
    public static void main(String[] args) {
        // Syntax to make array

            // first way
        // type[] arrayName = new type[size];
        // ex.  int[] marks = new int[3];

            // second way
        // type arrayName[] = new type[size];
        // ex.  int marks[] = new int[3];

            // third way to make direct array
     //   type arrayName[] = { /* values */};
        ex. int marks[] = { 10,20,30}; 

        // writing program to understand array

        int[] marks= new int[5];
        marks[0] = 99;
        marks[1] = 98;
        marks[2] =58;
        marks[3] =58;
        marks[4] =58;

        // System.out.println(marks[0]);
        // System.out.println(marks[1]);
        // System.out.println(marks[2]);
        // System.out.println(marks[3]);
        // System.out.println(marks[4]);


        // print using for loop
        for(int i = 0; i<5; i++){
            System.out.println(marks[i]);
        }

    }
}