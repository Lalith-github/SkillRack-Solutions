import java.util.*;

public class Hello {

    public static void main(String[] args) {
        // Your Code Here
        Scanner sc = new Scanner(System.in);
    
        int n = sc.nextInt();
        int start = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print((start++) + " ");
            }
            System.out.println();
        }
    }
}