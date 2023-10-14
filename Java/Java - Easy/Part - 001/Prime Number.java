import java.util.*;
public class Hello {
    
    public boolean isPrime(int n){
        if(n<=1) return false;
        for(int i=2; i*i<=n;i++){
            if(n%i==0) return false;
        }
        
        return true;
    }

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        Hello obj = new Hello();
        int n = sc.nextInt();
        System.out.println(obj.isPrime(n) ? "YES" : "NO");
	}
}