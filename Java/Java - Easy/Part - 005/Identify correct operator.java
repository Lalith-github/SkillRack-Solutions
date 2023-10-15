import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String expression = sc.nextLine();
		int result = 0, left =0, right = 0;
		char op = ' ';
		int count = 0, flag = 0;
		for(char ch : expression.toCharArray()){
		    if(Character.isDigit(ch)){
		        count = count * 10 + Character.getNumericValue(ch);
		        if(flag == 1){
		            right = count;
		        }else if (flag == 0) {
		            left = count;
		        }
		        else if (flag == 2) result = count;
		    }else {
		        count = 0;
		        if(ch != '='){
		            op = ch;
		            flag = 1;
		        }else {
		            flag = 2;
		        }
		    }
		}
		
		if(left + right == result) System.out.println("+");
		else if(left - right == result) System.out.println("-");
		else if(left * right == result) System.out.println("*");
		else System.out.println("/");
    
	}
}