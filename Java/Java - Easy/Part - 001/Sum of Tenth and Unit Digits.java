import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int unit = n%10;
        n/=10;
        int tenth = n%10;
        System.out.print(unit+tenth);
	}
}