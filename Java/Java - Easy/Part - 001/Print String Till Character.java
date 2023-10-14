import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        char inCh = sc.next().charAt(0);
        
        for(char ch : input.toCharArray()){
            if(ch == inCh) break;
            System.out.print(ch);
        }
	}
}