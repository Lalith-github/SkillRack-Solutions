import java.util.*;

public class Hello {

    static int maxRepeating(int arr[], int n) {
        Map<Integer, Integer> countMap = new HashMap<>();

        for (int i = 0; i < n; i++) {
            countMap.put(arr[i], countMap.getOrDefault(arr[i], 0) + 1);
        }
        int maxCount = 0;
        int result = 0;

        for (Map.Entry<Integer, Integer> entry : countMap.entrySet()) {
            int count = entry.getValue();
            int element = entry.getKey();
            
            if (count > maxCount || count == maxCount && element < result) {
                result = element;
                maxCount = count;
            }
        }
        return result;

    }

    public static void main(String[] args) {
        // Your Code Here
        Scanner sc = new Scanner(System.in);
        String[] numbersString = sc.nextLine().split(" ");
        int n = numbersString.length;
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = Integer.parseInt(numbersString[i]);

        System.out.println(Hello.maxRepeating(arr, n));
    }
}