import java.util.*;

class search_ele_array{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int size = sc.nextInt();

        int[] arr = new int[size];

        for(int i=0; i<arr.length; i++){
            System.out.print("Enter marks : ");
            arr[i] = sc.nextInt();
        }

        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+ " ");
        }

        System.out.println();

        System.out.print("Search ele : ");
        int searchEle = sc.nextInt();

        for(int i=0; i<arr.length; i++){
            if(arr[i] == searchEle){
                System.out.println("Element is found at : " + i);
            }
        }






    }
}