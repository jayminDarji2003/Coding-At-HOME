// pattern 9
/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

    understanding:-
        if cell sum is even the print -> 1
        else cell sum is odd then print -> 0

*/

class pattern_9{
    public static void main(String[] args) {
        int n = 5;

        // outer loop
        for(int i = 1; i<=n; i++){
            //inner loop
            for(int j = 1; j<=i; j++){
                int sum = i + j;
                if(sum % 2 == 0){   // even
                    System.out.print("1 ");
                }else{
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }
    }
}



