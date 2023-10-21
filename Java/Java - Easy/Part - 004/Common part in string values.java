import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String string1 = sc.nextLine();
        String string2 = sc.nextLine();
        int countIndex = 0;
        for(int i=0;i<string1.length() - 1; i++){
            if(string1.charAt(i) == string2.charAt(countIndex)){
             countIndex++;   
            }
        }
        System.out.println(string2.substring(0, countIndex + 1));
	}
}