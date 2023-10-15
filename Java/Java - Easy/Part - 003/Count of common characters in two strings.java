import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String string1 = sc.nextLine();
        String string2 = sc.nextLine();
        
        Set<Character> set1 = new HashSet<>();
        Set<Character> set2 = new HashSet<>();
        for(char ch: string1.toCharArray()) set1.add(ch);
        for(char ch: string2.toCharArray()) set2.add(ch);
        set1.retainAll(set2);
        System.out.println(set1.size());

        
	}
}