import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int count = 0;
        List<Integer> arr = new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        
        Collections.sort(arr, Collections.reverseOrder());
        int i,j;
        for(i=2; i<arr.get(0);i++){
            for(j = 0; j<n;j++){
                if(arr.get(j) % i != 0){
                    break;
                }
            }
            if(j>=n) count++;
        }
        System.out.println(count);
	}
}