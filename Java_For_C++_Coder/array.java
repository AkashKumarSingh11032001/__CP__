import java.util.Scanner;

public class array {
    public static void fun(int[] arr) { //call by address
        for(int i = 0; i < arr.length; i++){
            System.out.println(arr[i]);
        }
        // other way to print
        for(int val:arr){
            System.out.println(val);
        }
        
    }
    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);

        int[] arr = new int[5];
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;

        fun(arr);

        
    }
}
