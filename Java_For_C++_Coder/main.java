import java.util.*;

public class main {

    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);

        // nextInt() reads the next integer from the keyboard
        int number = scn.nextInt();

        // sentence input
        String s1 = scn.nextLine();

        // word by word input
        String s2 = scn.next();

        System.out.println("You entered: " + number);
        System.out.println("You entered: " + s1);
        System.out.println("You entered: " + s2);
    }
}