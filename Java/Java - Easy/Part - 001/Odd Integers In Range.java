import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        sc.nextLine();
        int b= sc.nextInt();
        
        for(int i=a+1; i<b;i++) {
            if(i%2!=0)
            System.out.print(i + " ");
            
        }
	}
}