import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		int len = input.length();
		
		for(int i=0;i<len;i++){
		    for(int j=0;j<len;j++){
		        if(j ==i || j==len-i-1) System.out.print(input.charAt(j));
		        else System.out.print(" ");
		    }
		    System.out.print("\n");
		}

	}
}