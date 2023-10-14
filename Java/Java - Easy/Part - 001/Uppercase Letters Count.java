import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int count = 0;
        for(char ch: input.toCharArray()){
            if(Character.isUpperCase(ch)) count++;
        }
        System.out.println(count);
	}
}