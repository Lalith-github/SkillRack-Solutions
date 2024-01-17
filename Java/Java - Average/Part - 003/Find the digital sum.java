import java.util.Scanner;

public class Hello{
    static int digitSum(int n){
        if(n<9) return n;
        int sum = 0;
        while(n!=0){
            sum += n%10;
            n/=10;
        }
        return digitSum(sum);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(Hello.digitSum(n));
    }
}