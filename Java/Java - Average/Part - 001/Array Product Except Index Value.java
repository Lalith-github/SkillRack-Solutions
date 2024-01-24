import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> list = new ArrayList<>();
        while (sc.hasNextInt()) {
            int n = sc.nextInt();
            list.add(n);
        }
        int product = list.stream().reduce(1, (currentValue, nextValue) -> {
            return currentValue * nextValue;
        });

        for (int value : list) {
            System.out.print((product / value) + " ");
        }
    }
}