import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        
        for(int i=1;i<input.length() -1 ;i++){
            System.out.print(input.charAt(i));
        }
	}
}