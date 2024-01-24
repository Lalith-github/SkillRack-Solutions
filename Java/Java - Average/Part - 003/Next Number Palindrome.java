import java.util.*;
public class Hello {
    static boolean isPali(int n){
        int temp = n;
        int result = 0;
        while(n!=0){
            int rem = n%10;
            result = result * 10 + rem;
            n/=10;
        }
        return temp == result;
    }
    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        n++;
        while(!Hello.isPali(n )){
            n++;
        }
        System.out.println(n);
	}
}