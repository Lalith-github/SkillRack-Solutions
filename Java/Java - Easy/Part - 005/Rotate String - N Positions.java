import java.util.*;
public class Hello {
    
    public static String rotateString(String str, int d){
        int len = str.length();
        d = d%len;
        
        String result = str.substring(len - d) + str.substring(0, len-d);
        return result;
    }

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        
        String input = sc.nextLine();
        int n = sc.nextInt();
        
        System.out.println(Hello.rotateString(input, n));
	}
}