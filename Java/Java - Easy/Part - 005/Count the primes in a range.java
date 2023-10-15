import java.util.*;
import java.lang.Math;
public class Hello {
    
    public static boolean isPrime(int num){
        if(num<=1) return false;
        
        for(int i=2; i<=Math.sqrt(num);i++){
            if(num%i==0) return false;
        }
        return true;
    }

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        int count = 0;
        for(int i=a;i<=b;i++){
            if(Hello.isPrime(i)) count++;
        }
        System.out.println(count);
	}
}