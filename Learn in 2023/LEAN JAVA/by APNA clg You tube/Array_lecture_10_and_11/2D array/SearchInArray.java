import java.util.Scanner;

class SearchInArray{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter rows : ");
        int rows = sc.nextInt();

        System.out.print("Enter columns : ");
        int cols = sc.nextInt();

        int[][] marks = new int[rows][cols];

        // Input
        // control rows
        System.out.print("Enter elements : ");
        
        for(int i=0; i<rows; i++){
            // control cols
            for(int j=0; j<cols; j++){
                marks[i][j] = sc.nextInt();
            }
        }

        System.out.println("Search element : " );
        int x = sc.nextInt();

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(marks[i][j] == x){
                    System.out.println("Element is found at : " +"(" + i + "," + j + ")");
                }
            }
        }
    }
}