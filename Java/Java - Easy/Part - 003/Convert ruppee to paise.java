import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        double ruppee = sc.nextDouble();
        
        System.out.format("%.0f", (double) (ruppee * 100.0));
	}
}