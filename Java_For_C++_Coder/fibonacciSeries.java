import java.util.*;

public class fibonacciSeries {
    public static void main(String[] args) {
        int a = 0;
        int b = 1;
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        System.out.print(a);
        System.out.print(b);
        while (n != 0) {
            int c = a + b;
            System.out.print(c);
            a = b;
            b = c;
            n = n - 1;
        }

    }
}
