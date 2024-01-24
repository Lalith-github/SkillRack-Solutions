import java.util.*;

public class Hello {

    public static void main(String[] args) {
        // Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int n = input.length();
        int[] vowelPos = new int[n];
        for (int i = 0; i < n; i++) {
            char letter = input.charAt(i);
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
                vowelPos[i] = 1;
            else
                vowelPos[i] = 0;
        }
        for (int i = n - 1; i >= 0; i--) {
            if ((vowelPos[n - 1 - i] == 0))
                System.out.print(input.charAt(i));
        }
    }
}