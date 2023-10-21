import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int max = 0;
        String maxStudent= "";
        for(int i=1;i<=n;i++){
            String[] input = sc.nextLine().split(":");
            int sum = 0;
            for(int j=1;j<=3;j++){
                sum += Integer.parseInt(input[j]);
            }
            if(sum > max){
                max = sum;
                maxStudent = input[0];
            }
        }
        System.out.println(maxStudent);
	}
}