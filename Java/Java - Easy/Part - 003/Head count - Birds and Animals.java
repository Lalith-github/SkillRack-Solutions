import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        
        int l = sc.nextInt();
        
        int birds = (4 * h - l) /2;
        int animals = h - birds;
        System.out.println(birds + " " + animals);
	}
}