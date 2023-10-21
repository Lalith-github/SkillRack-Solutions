import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int max = 0;
        String maxName="";
        for(int i=1;i<=n;i++){
            String[] input = sc.nextLine().split(",");
            String name = input[0];
            int score = Integer.parseInt(input[1]);
            if (score > max) {
                max = score;
                maxName = name;
            }
        }
        System.out.println(maxName);
	}
}