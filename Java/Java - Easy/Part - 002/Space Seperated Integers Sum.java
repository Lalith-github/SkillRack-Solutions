import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().split(" ");
        int sum = 0;
        for(String number : input) sum += Integer.parseInt(number);
        System.out.println(sum);
	}
}