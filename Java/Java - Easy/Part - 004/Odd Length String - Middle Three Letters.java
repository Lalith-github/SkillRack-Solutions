import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		int mid = input.length() / 2;
		System.out.println(input.substring(mid-1, mid + 2));

	}
}