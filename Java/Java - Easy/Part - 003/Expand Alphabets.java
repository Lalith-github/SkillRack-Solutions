import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String string = sc.nextLine();
        int count = 0;
        for(char ch: string.toCharArray()){
            if(Character.isDigit(ch)){
                count = count * 10 +  Character.getNumericValue(ch);
            }else{
                System.out.print(String.valueOf(ch).repeat(count));
                count = 0;
            }
        }

	}
}