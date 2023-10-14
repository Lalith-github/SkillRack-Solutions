import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        
        StringBuilder string = new StringBuilder();
        string.append(input);
        string.reverse();
        System.out.println(string);
	}   
}