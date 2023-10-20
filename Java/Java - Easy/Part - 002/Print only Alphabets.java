import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        for(char ch : input.toCharArray()){
            if(Character.isAlphabetic(ch)) System.out.print(ch);
        }
	}
}