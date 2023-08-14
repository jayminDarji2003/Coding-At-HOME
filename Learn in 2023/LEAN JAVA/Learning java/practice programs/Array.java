    // Array in java

// Array :- In simple words array is a collection similar data type.
// let's see the syntax of a array 
// dataType variableName[];

// Program:- Store this marks in one array
// 10 , 20 , 30 , 40 ,50



class Array{
    public static void main(String args[]){
        int marks[] = new int[5];
        marks[0] = 10;
        marks[1] = 20;
        marks[2] = 30;
        marks[3] = 40;
        marks[4] = 50;

        for(int i = 0; i < 5;i++){
            System.out.println("The marks is : " + marks[i]);
         }
    }
}




                                                                     