// HW_pattern_problem :-
/*
                * * * * *
              * * * * *
            * * * * *
          * * * * *  
        * * * * *
 */

class HW_pattern_problem{
    public static void main(String[] args) {
        int n = 5;
        //outer loop
        for(int i = 1;i <= n; i++){
            //inner loop -> print space
            for(int j = 1; j <= n-i;j++){
                System.out.print(" ");
            }
            //inner loop -> print "*"
            for(int j = 1; j <= n;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
