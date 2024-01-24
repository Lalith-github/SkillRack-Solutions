// import java.util.*;

// public class Hello {

//     public static void main(String[] args) {
//         // Your Code Here
//         Scanner sc = new Scanner(System.in);
//         int l1 = sc.nextInt();
//         int l2 = sc.nextInt();
//         sc.nextInt();
//         Map<Integer, Integer> map = new HashMap<>();
//         int[] arr = new int[l1];
//         int[] arr1 = new int[l2];
//         for (int i = 0; i < l1; i++) {
//             arr[i] = sc.nextInt();
//             map.set(arr[i], map.getOrDefault(arr[i], 0) + 1);
//         }
//         sc.nextLine();
//         for (int i = 0; i < l2; i++) {
//             arr1[i] = sc.nextInt();
//             map.set(arr1[i], map.getOrDefault(arr1[i], 0) + 1);
//         }
//         int count = 0;
//         for (Integer key : map.keySet()) {
//             Integer value = map.get(key);
//             if (value == 1)
//                 count++;
//         }
//         System.out.println(count);

//     }
// }