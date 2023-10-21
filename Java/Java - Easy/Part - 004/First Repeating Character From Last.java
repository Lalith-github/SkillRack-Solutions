import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		
		for(int i=input.length() - 1; i>=0;i--){
		    for(int j=i-1; j>=0;j--){
		        if(input.charAt(i) == input.charAt(j)){
		            System.out.println(input.charAt(i));
		            return;
		        }
		    }
		}

	}
}