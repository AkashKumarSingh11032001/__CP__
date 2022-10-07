import java.util.*;

public class gradingSystem {
    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);
        int x = scn.nextInt();

        if (x > 90) {
            System.out.println("Excellent!!!");
        } else if (x > 80 && x < 90) {
            System.out.println("Good!!!");
        } else if (x > 70 && x < 80) {
            System.out.println("Fair!!!");
        } else if (x > 60 && x < 70) {
            System.out.println("Meets Expectation!!!");
        } else {
            System.out.println("Fair!!!");
        }

    }

}
