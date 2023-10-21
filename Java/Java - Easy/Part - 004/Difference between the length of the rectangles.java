import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		int alenAmount = sc.nextInt();
		int timAmount = sc.nextInt();
		int alenArea = sc.nextInt();
		int timArea = sc.nextInt();
		
		double alenCourt = (alenAmount / 5.0) / alenArea;
		double timCourt = (timAmount/5.0)/ timArea;
		
		System.out.println(String.format("%.2f", Math.abs(alenCourt - timCourt)));

	}
}