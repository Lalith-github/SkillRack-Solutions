import java.uitl.*;
import java.util.Scanner;
public class Hello{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int length = input.length() - 1;
        for(int i=0;i<length;i++){
            if(input.charAt(i) == input.charAt(length)) length --;
            else{
                if(input.charAt(i+1) == input.charAt(length)){
                    System.out.println(input.charAt(i));
                    break;
                }else{
                    System.out.println(input.charAt(length));
                    break;
                }
            }
        }
    }
}