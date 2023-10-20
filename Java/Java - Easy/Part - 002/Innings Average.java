import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        double avg1 = 0.0;
        double avg2 = 0.0;
        for(int i=0;i<n;i++) {
            String[] input = sc.nextLine().split(" ");
            int a = Integer.parseInt(input[0]);
            int b = Integer.parseInt(input[1]);
            avg1 += (double)a;
            avg2 += (double)b;
            // System.out.println(input[0]);
        }
        avg1 /= (double) n;
        avg2 /= (double) n;
        System.out.format("%.2f\n",avg1);
        System.out.format("%.2f",avg2);
	}
}