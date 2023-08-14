
import java.util.*;

public class Main {

    public static void printJava(){
        System.out.println("hello java");
    }

    public static void printName(String name){
        System.out.println(name);
    }

    public static void printSum(int a,int b){
        int sum = a +b;
        System.out.println(sum);
    }

    public static void main(String[] args) {
            // Hello world program
//        System.out.println("hello world");

            // variable in java
//      String name = "jaymin";
//      int age = 20;
//      float interestRate = 20.13F;
//
//      String friend = "jaymin";


            // Data type in java

        /*
            There are 8 data type in java
                1. byte - 1 byte
                2. short - 2 byte
                3. int    - 4 byte
                4. long - 8 byte
                5. float -  4 byte
                6. double -  8byte
                7. char - 2byte
                8. boolean - 1byte
         */



        // All about String

        // How to declare
            // way 1
//        String nameFather = "Satishkumar";
            // way 2
//        String nameMother = new String( "Naynaben");
//        System.out.println(nameFather);
//        System.out.println(nameMother);

        // Methods of string

        // 1.concatenate
//        String name1 = "jaymin";
//        String name2 = "darji";
//        String name3 = name1 + name2;
//        String name4 = name1 + " and " + name2;
//        System.out.println(name3);
//        System.out.println(name4);

        // 2.charAt function
      // Note :- Find which position which character stored

//          String name = "jaymin";
//      System.out.println(name.charAt(2));

        //3.replace
        //Note:- replace funcation is used to replace a character in string.The string is immutable so the original string will not be changd.

//        String name = "Aman";
//        String name2 = name.replace("A","J");
//        System.out.println(name2);


        //4.substring
        //Note:- To print a perticular sting

//        String name = "devang and jaymin";
//        String newName = name.substring(7,11);  // starting(7) and end (11)
//        System.out.println(newName);




               // Array in java

        // How to make an array
        // let's make marks array
//        int[] marks = new int[3];
//        marks[0] = 99;
//        marks[1] = 98;
//        marks[2] = 77;

            //or if we know the value so make below like this
//        int[] marks1 = {99,88,77};

//        System.out.println(marks[0]);
//        System.out.println(marks[1]);
//        System.out.println(marks[2]);

                //Print the all data of the array using for loop
//        for(int i = 0;i < marks.length;i++){
//            System.out.println(marks[i]);
//        }


        // sorting an array using Arrays class
//        int[] arr = new int[3];
//        arr[0] = 10;
//        arr[1] = 9;
//        arr[2] = 8;
//                // traversal before sorting
//        System.out.println("Before soring");
//        for (int i = 0;i < arr.length;i++){
//            System.out.print(arr[i] + " ");
//        }
//        System.out.println("");     // give next line after finishing array values
//        Arrays.sort(arr);
//                // traversal after sorting
//        System.out.println("After sorting");
//        for (int i = 0;i < arr.length;i++){
//            System.out.print(arr[i] + " ");
//        }

        // Making 2D arrays
        // int[][] finalMarks = {{99,88,77},{99,66,45}};
        // System.out.println(finalMarks[0][0]);
        // System.out.println(finalMarks[1][1]);




        // Casting
        /*
            There are two types of Casting in Java
                1.Implicit Casting :- ex. stored int value in double
                                     ex.  float value in double
                2.Explicit Casting :- ex. store double value in int
                                      ex.   float value in int
        */

//            //example of implicit casting
//        double num1 = 100;
//        double finalNum1 = num1 + 18;
//        System.out.println(finalNum1);
//
//            //example of explicit casting
//        int num2 = 100;
//        // int finalNum2 = num2 + 10.10;   // if we write this will get error because double value can't stored in int variable
//        int finalNum22 = num2 + (int)10.10;
//        System.out.println(finalNum22);




        // Constant in Java(final:write variable name is Capital letter)
        // Note:- The value of constant will not change.If we want to change the value of constant will give you error

//        int age = 19;
//        age = 20;
//        age = 21;
//        Note:- The above age value will change because this variable not a constabt variabl.If we want to make constant variable so add  "final" before declaring the variable

        //ex
//        final float PI = 3.14F;
//        System.out.println(PI);



        // Operator in java

        /*
            There are 4 types of operator in JAVA
                1.Arithmatic operator (+,-,*,/,%)
                2.Relational operator (<,>,<=,>=,==,!=,++,--)
                3.Conditional operator (&&,||,!)
                4.Assignment operator (=,+=,-=,*=,/=,%=)
        */  //Note:- I'm very familier about the operator so don't west my time to explain all things in third time



        // Math class
        /*
            Some funcatin in Math class
                1. max()
                2. min()
                3. ramdom() --> will give you ramdom number

       */
            //1. max()
//        int a = 10;
//        int b = 20;
//        System.out.println(Math.max(a,b));
//
//            //2. min()
//        int a1 = 10;
//        int b1 = 20;
//        System.out.println(Math.min(a1,b1));

            // 3. random()
//        System.out.println(Math.random());      // --> will give you the number between 0 to 1
        // if we want integer number then casting the type but also give the 0 value because integer will not allow floating value so making value integer multiplay with 100
//        System.out.println((int)(Math.random()*100));


        //Taking input in Java
 //       Scanner sc = new Scanner(System.in);
//        System.out.print("Enter your age : ");
//        int age = sc.nextInt();
//        System.out.print("Your age is : " + age);

//        System.out.print("Enter your name : ");
//        String name = sc.next();    //  ->just taking first string
//        String name1 = sc.next();    //  ->taking whole string (sentence)
//        System.out.print("Your name is : " + name);
//        System.out.print("Your name is : " + name1);



        //Conditional statement
        /*
            There are four types of conditional statement
                1. if
                2. if-else
                3. if else if
                4. switch case
        */

        // 1. if
//        Scanner sc = new Scanner(System.in);
//        int age = sc.nextInt();
//        if(age > 18){
//            System.out.println("you can drive");
//        }



        // 2. if else

//        boolean isSunUp = true;
//        if (isSunUp == true)
//            System.out.println("day");
//        else
//            System.out.println("night");


        // 3. if else if

//        Scanner sc = new Scanner(System.in);
//        System.out.print("Enter cash you have : ");
//        int cash = sc.nextInt();
//            //NOTE:- To buy pen = 10 and book = 40
//        if (cash <= 10){
//            System.out.println("Sorry,Need more money");
//        }
//        else if(cash > 10 && cash < 50){
//            System.out.println("You can buy one thing");
//        }
//        else{
//            System.out.println("You can buy both of them");
//        }


//        4. Switch case

//        int day = 1;    // 1 - monday , 2 - tuesday and so on
//
//        switch (day){
//            case 1:
//                System.out.println("monday");
//                break;
//            case 2:
//                System.out.println("tuesday");
//                break;
//            default:
//                System.out.println("Enter valid number");
//        }




        // LOOPS IN JAVA
        /*
            There are three types of loop in java
                1. while loop
                2. do while loop
                3. for loop
        */

        // 1.while loop

        // 100-1
//        int i = 100;
//        while(i >= 1){
//            System.out.println(i);
//            i--;
//        }


        // 2.do while loop

         // 100-1
//        int i = 100;
//        do{
//            System.out.println(i);
//            i--;
//        }while(i >= 1);


        // 3.for loop

        // 1-100
//        for (int i = 1; i <= 100 ; i++){
//            System.out.println(i);
//        }


        // Exercise of do-while loop
//        Scanner sc = new Scanner(System.in);
//        int number = 0;
//
//        do{
//            System.out.print("Enter a number (above 1 if less then stop): ");
//            number = sc.nextInt();
//            System.out.println("Your number is : " + number);
//        }while(number >= 0);




        // Expection handaling

        // used two keyword
            // 1. try
            // 2. catch

//        int[] marks = {99,86,55};
//        try{
//            System.out.println(marks[5]);
//        }catch(Exception exception){
//            // do something after catching
//        }
//        System.out.println("The name of student is jaymin darji");



            // access the printJava method
//        printJava();
//        printJava();
//        printJava();
//        printJava();

            // access the printName method and give parameter
//        printName("jaymin");
//        printName("devang");
//        printName("bhargav");


            // call the printSum method
//        printSum(1,2);
//        printSum(5,2);







    }
}