import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        char A = sc.nextLine().charAt(0);
        char B = sc.nextLine().charAt(0);

        int count = 0;
        for (int i = 0; i < input.length() - 1; i++) {
            char temp = input.charAt(i);
            if (temp == A && input.charAt(i + 1) == B)
                count++;
        }
        System.out.println(count);

    }
}