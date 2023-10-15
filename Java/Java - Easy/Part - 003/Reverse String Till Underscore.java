import java.util.*;
public class Hello {

    public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		StringBuilder firstHalf = new StringBuilder();

        if(input.contains("_")){
            String[] splitted = input.split("_");
            firstHalf.append(splitted[0]);
            System.out.println(firstHalf.reverse() + (splitted.length > 1 ? "_" + splitted[1] : "_"));
        }else {
            firstHalf.append(input);
            System.out.println(firstHalf.reverse());
        }

	}
}