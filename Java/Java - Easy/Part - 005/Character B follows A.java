import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        char A = sc.next().charAt(0);
        char B = sc.next().charAt(0);
        
        int length = input.length(), count = 0;
        for(int i=0;i<length-1;i++){
            if(input.charAt(i) == A && input.charAt(i+1) == B) count++;
        }
        System.out.println(count);
	}
}