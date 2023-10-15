import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int result=0, left=0, right=0;
        char op = ' ';
        for(char ch: input.toCharArray()){
            if(ch >='a' && ch<='z' || ch>='A' && ch<='Z') op = Character.toLowerCase(ch);
        }
        String[] splitted = input.split("[A-Za-z]");
        left = Integer.parseInt(splitted[0]);
        right = Integer.parseInt(splitted[1]);
        
        switch(op){
            case 'a':
                result = left + right;
                break;
            case 's':
                result = left - right;
                break;
            case 'm':
                result  = left * right;
                break;
            case 'd':
                result = left/right;
                break;
        }
        System.out.println(result);
	}
	
}