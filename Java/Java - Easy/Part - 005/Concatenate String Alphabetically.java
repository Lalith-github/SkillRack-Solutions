import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        
        if(str1.charAt(0) > str2.charAt(0)){
            System.out.println(str2 + str1);
        }else System.out.println(str1 + str2);
	}
}