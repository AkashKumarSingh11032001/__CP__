import java.util.*;

public class primeOrNot {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int num = scn.nextInt();

        if (num == 1)
            System.out.println("false");
        else if (num == 2 || num == 3)
            System.out.println("true");
        else if (num % 2 == 0 || num % 3 == 0)
            System.out.println("false");
        else {
            for (int i = 5; i * i <= num; i = i + 6) {
                if (num % i == 0 || num % (i - 2) == 0)
                    System.out.println("false");
            }
            System.out.println("true");
        }
    }

}
