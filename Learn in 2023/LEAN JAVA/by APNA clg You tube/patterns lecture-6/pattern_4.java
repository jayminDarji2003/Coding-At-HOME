// pattern_4

class pattern_4{
    public static void main(String[] args) {
        int n=5;

        for(int i=1; i<=n; i++){
            //space
            for(int j=1; j<=n-i; j++){
                System.out.print(" ");
            }

            //star
            for(int j=1; j<=i; j++){
                System.out.print("* ");
            }

            System.out.println();
        }

        for(int i=n; i>=1; i--){
            //space
            for(int j=1; j<=n-i; j++){
                System.out.print(" ");
            }

            //star
            for(int j=1; j<=i; j++){
                System.out.print("* ");
            }

            System.out.println();
        }
    }
}