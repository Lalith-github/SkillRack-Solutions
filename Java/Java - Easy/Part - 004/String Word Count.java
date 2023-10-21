import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		int word = 0;
		for(char ch: input.toCharArray()){
		    if(Character.isSpaceChar(ch)){
		        word ++;
		    }
		}
		System.out.println(word + 1);

	}
}