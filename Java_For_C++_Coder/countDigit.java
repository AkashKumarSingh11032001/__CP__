import java.util.*;
public class countDigit {
    public static void main(String[] args) {
        int cnt = 0;
        Scanner scn = new Scanner(System.in);
        int dig = scn.nextInt();

        while(dig != 0){
            cnt++;
            dig /= 10;
        }
        System.out.println(cnt);
    }
}
