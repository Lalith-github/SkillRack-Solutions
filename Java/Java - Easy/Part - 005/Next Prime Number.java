import java.util.*;
import java.lang.Math;
public class Hello {
    
    public static boolean isPrime(int num){
        if(num<=1) return false;
        for(int i=2; i<=Math.sqrt(num);i++) {
            if(num%i==0) return false;
        }
        return true;
    }

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), i=n+1;
        while(!Hello.isPrime(i)) i++;
        
        System.out.println(i);
	}
}