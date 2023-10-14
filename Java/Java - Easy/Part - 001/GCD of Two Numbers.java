import java.util.*;
public class Hello {
    
    public int gcd(int a, int b){
        if(b == 0) return a;
        return this.gcd(b, a%b);
        
    }
    
    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        sc.nextLine();
        int b = sc.nextInt();
        Hello  obj = new Hello();
        System.out.println(obj.gcd(a,b));
	}
}