import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        Set<Character> set = new TreeSet<>();
        
        for(char ch: input.toCharArray()) set.add(ch);
        
        StringBuilder result = new StringBuilder();
        
        for(char ch: set) result.append(ch);
        
        System.out.println(result.reverse());
	}
}