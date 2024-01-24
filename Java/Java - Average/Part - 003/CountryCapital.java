import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        Map<String, String> countryCapital = new HashMap<>();
        for (int i = 0; i < n; i++) {
            countryCapital.put(sc.next(), sc.next());
            sc.nextLine();
        }
        String search = sc.nextLine();
        String result = countryCapital.get(search);
        if (result != null)
            System.out.println(result);
        else
            System.out.println("NONE");

    }
}