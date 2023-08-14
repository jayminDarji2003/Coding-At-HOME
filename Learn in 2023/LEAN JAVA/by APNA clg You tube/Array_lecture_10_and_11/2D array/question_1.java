import java.util.Scanner;

class question_1{
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
            // System.out.println();
        }

        System.out.println();

        // output
        System.out.println("Output");
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                System.out.print(+ marks[i][j] + " ");
            }
            System.out.println();
        }
    }
}