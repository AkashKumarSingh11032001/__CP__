import java.util.*;

public class primeNumTilN {
    public boolean prime(int num) {

        if (num == 1)
            return false;
        else if (num == 2 || num == 3)
            return true;
        else if (num % 2 == 0 || num % 3 == 0)
            return false;
        else {
            for (int i = 5; i * i <= num; i = i + 6) {
                if (num % i == 0 || num % (i - 2) == 0)
                    return false;
            }
            return true;
        }
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int num = scn.nextInt();
        primeNumTilN obj = new primeNumTilN();
        for (int i = 1; i <= num; i++) {
            if (obj.prime(i))
                System.out.print(i + " ");
        }
    }
}
