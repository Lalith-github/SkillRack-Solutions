import java.util.*;
public class Hello {

    public static void main(String[] args) {
        //Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        List<Integer> list = new ArrayList<>();
        for(int i=0;i<n;i++) list.add(sc.nextInt());
        Collections.sort(list);
        int sum = 0;
        for(int i=0;i<m;i++) sum += list.get(i);
        System.out.println(sum);
    }
}