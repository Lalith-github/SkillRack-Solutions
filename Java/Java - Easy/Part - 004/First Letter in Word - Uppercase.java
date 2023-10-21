import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        
        for(int i=0;i<input.length();i++){
            char current = input.charAt(i);
            if(i!=0){
                if(input.charAt(i-1) == ' ') current = Character.toUpperCase(current);
            }else if (i== 0) current = Character.toUpperCase(current);
            System.out.print(current);
            
        }
	}
}