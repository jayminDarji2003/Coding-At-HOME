    // Switch case statement.

class switchStatement{
    public static void main(String args[]){
        int num=2;
        // System.out.println("Case 1 : value is : " +num);
        switch(num + 2){
            case 1:
                System.out.println("Case 1 : value is : " +num);
                break;
            
            case 2:
                System.out.println("Case 2 : value is : " +num);
                break;

            case 3:
                System.out.println("Case 3 : value is : " +num);
                break;

            default: 
                System.out.println("Default : value is " +num);  
        }
    }
}