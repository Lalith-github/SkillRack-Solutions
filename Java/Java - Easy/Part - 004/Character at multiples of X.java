import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		int n = sc.nextInt();
		
		for(int i=n;i<=input.length();i+=n){
		     System.out.print(input.charAt(i-1));
		}

	}
}