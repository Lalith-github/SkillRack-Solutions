import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        List<Integer> numbers = new ArrayList<>();
        int n = sc.nextInt();
        
        for(String num : input.split(" ")){
            numbers.add(Integer.parseInt(num));
        }
        
        int d = numbers.get(1) - numbers.get(0);
        int term = numbers.get(0) + (n-1) * d;
        System.out.println(term);
        
	}
}