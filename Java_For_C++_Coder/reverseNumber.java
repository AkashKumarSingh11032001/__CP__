import java.util.*;
public class reverseNumber {
    public static void main(String[] args) {
        
        Scanner scn = new Scanner(System.in);
        int num = scn.nextInt();

        int rev = 0;
        while(num != 0){
            int dig = num % 10;
            rev = rev * 10 + dig;
            num /= 10;

        }
        System.out.println(rev);
    }
    
}
