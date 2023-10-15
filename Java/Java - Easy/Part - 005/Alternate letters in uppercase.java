import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
    
        for(String word : input.split(" ")){
            for(int i=0;i<word.length();i++){
                char ch = word.charAt(i);
                char changed = i%2==0 ? Character.toUpperCase(ch) : Character.toLowerCase(ch);
                System.out.print(changed);
            }
            System.out.print(" ");
        }
	}
}