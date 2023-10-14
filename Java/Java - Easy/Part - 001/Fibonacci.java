import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long a = 0L, b= 1L, c = a;
        for(int i=1; i<=n;i++){
            if(i<=2){
                System.out.print(c+ " ");
                c = b;
            }else {
                c = a+b;
                System.out.print( c + " ");
                a = b;
                b = c;
            }
        }
	}
}