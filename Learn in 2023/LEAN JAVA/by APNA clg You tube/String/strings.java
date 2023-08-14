import java.util.Scanner;

class strings{
    public static void main(String[] args){
        
        // Declare string
        // String name = "jaymin";
        // String fullName = "jaymin darji";
        // String sentence = "my name is jaymin darji.";

        // Taking String input from user
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Entre your name : ");
        // String name = sc.next();    // This will take only one word
        // String name2 = sc.nextLine();    // This will take whole sentence
        // System.out.println("Your name is : " + name2);



        // ->Functions in String

        //1.concatenation

        String firstName = "jaymin";
        String lastName = "darji";
        String fullName = firstName + lastName;
        System.out.println(fullName);


        // 2.length()

        String name = "Bhogilal";
        System.out.println(name.length());


        // 3. charAt()
        // To print whole string character one by one

        for(int i=0; i<fullName.length(); i++){
            System.out.println(fullName.charAt(i));
        }
        


    }
}