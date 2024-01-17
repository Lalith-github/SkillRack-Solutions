import java.util.Scanner;

public class Hello{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String[] split = input.split(":");
        int hours = Integer.parseInt(split[0]);
        if (hours >= 24) System.out.println("INVALIDINPUT");
        if(hours>=12 && hours<24) System.out.println("PM");
        else System.out.println("AM");
    }
}