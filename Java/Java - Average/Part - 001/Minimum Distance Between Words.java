

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] sen = new String[50];
        String w1, w2;
        int i = 0, l = 0, m = 0, min = 100;
        
        while (scanner.hasNext()) {
            sen[i] = scanner.next();
            i++;
        }
        w1 = sen[i - 2];
        w2 = sen[i - 1];
        i = i - 2;
        
        int[] index1 = new int[50];
        int[] index2 = new int[50];
        
        for (int j = 0; j < i; j++) {
            if (w1.equals(sen[j])) {
                index1[l++] = j;
            } else if (w2.equals(sen[j])) {
                index2[m++] = j;
            }
        }
        
        if (m == 0) {
            System.out.print(l - 2);
        } else {
            for (int j = 0; j < l; j++) {
                for (int k = 0; k < m; k++) {
                    int diff = index1[j] - index2[k];
                    if (diff < 0) {
                        diff = -diff;
                    }
                    if (diff < min) {
                        min = diff;
                    }
                }
            }
            System.out.print(min);
        }
    }
}
