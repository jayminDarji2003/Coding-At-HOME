// pattern :- pattern_8

/*
        1
        2  3
        4  5  6
        7  8  9  10
        11 12 13 14 15
 */


class pattern_8{
    public static void main(String[] args) {
        int n =5;
        int counter = 1;
        
        //outer loop
        for(int i=1; i<=n; i++){
            //inner loop
            for(int j = 1; j<=i; j++){
                System.out.print(counter + " ");
                counter++;
            }
            System.out.println();
        }
    }
}