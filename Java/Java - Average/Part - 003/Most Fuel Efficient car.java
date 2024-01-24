import java.util.*;

public class Hello {

    public static void main(String[] args) {
        // Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int effMileage = 0;
        int effCar = 1;
        for (int i = 0; i < n; i++) {
            int litre = sc.nextInt();
            int distance = sc.nextInt();
            int avgMileage = distance / litre;
            if (effMileage < avgMileage) {
                effMileage = avgMileage;
                effCar = i+1;
            }
        }
        System.out.println(effCar);
    }
}