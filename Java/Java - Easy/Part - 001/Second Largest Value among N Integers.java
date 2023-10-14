import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        List<Integer> list = new ArrayList<>();
        
        for(int i=0;i<n;i++){
            list.add(sc.nextInt());
            sc.nextLine();
        }
        Collections.sort(list, Collections.reverseOrder());
        System.out.println(list.get(1));
	}
}