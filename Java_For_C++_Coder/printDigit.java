import java.util.*;;
public class printDigit {
    public static void main(String[] args) {
        
        Scanner scn = new Scanner(System.in);
        int num = scn.nextInt();
        int cnt = 0;
        int temp = num;
        while(temp != 0){
            cnt++;
            temp /= 10;
        }

        int div = (int)Math.pow(10, cnt-1);
        while(num != 0){
            int q = num/div;
            System.out.println(q);

            num %= div;
        }
    }
}
