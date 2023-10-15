import java.util.*;
public class Hello {
    public static boolean isLeapYear(int year){
        return (year%400==0) || (year%4==0 && year%100!=0);
    }
    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        System.out.println(Hello.isLeapYear(year) ? "yes" : "no");
        
	}
}