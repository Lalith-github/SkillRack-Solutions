import java.util.Scanner;

public class Hello {
    static int CountSP(char str[], int n) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            String temp = "";
            for (int j = i; j < n; j++) {
                temp += str[j];
                StringBuilder reverseString = new StringBuilder();
                reverseString.append(temp);
                if (temp.length() > 2 && reverseString.reverse().toString().equals(temp))
                    count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        System.out.println(Hello.CountSP(input.toCharArray(), input.length()));
    }
}
