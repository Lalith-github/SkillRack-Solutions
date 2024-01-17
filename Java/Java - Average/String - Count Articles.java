import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Hello {

    public int countArticles(String[] words) {
        int count = 0;
        for (String word : words) {
            word = word.toLowerCase();
            Pattern pattern = Pattern.compile("[^a-z\\s]");
            Matcher matcher = pattern.matcher(word);
            word = matcher.replaceAll("");
            if (word.equals("an") || word.equals("the") || word.equals("a"))
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        Hello obj = new Hello();
        obj.countArticles(input.split(" "));
    }
}
