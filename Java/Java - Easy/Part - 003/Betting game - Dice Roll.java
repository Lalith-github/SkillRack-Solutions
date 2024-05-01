import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int x = sc.nextInt();
        sc.nextLine();
        int y = sc.nextInt();
       
        int sum =0;
        for(String inputValue: input.split(" ")){
            int value = Integer.parseInt(inputvalue);
            if(value%2==0) sum -= y;
            else sum+=x;
            
        }
        
        System.out.println(sum);
	}
}
