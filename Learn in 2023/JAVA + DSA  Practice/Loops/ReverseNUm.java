// reverse of a number
public class ReverseNUm {
    public static void main(String[] args) {
        int num = 12345;
        int rev = 0;

        while(num > 0){
            int lastDigit = num % 10;
            rev = (rev * 10) + lastDigit;
            num /= 10;
        }
        
        System.out.println(rev);
    }
}
