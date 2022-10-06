import java.util.*;

public class datatype {

    public static void fun() {
        int temp = a;
        a = b;
        b = temp;

    }

    static int a = 5;
    static int b = 10;

    public static void main(String[] args) {

        fun();
        System.out.println(a);
        System.out.println(b);

    }
}
