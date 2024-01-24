import java.util.*;
public class Hello {
    
    static void decryptMessage(String message, int columns){
        int len = message.length();
        int rows = len / columns;
        char decrypted[][] = new char[rows][columns];
        int k = 0;
        for(int i=0;i<rows;i++){
            if(i % 2== 0){
                for(int j=0;j<columns;j++) decrypted[i][j] = message.charAt(k++);
            }else{
                for(int j=columns-1;j>=0;j--) decrypted[i][j] = message.charAt(k++);
            }
        }
        
        for(int j=0;j<columns;j++){
            for(int i=0;i<rows;i++) System.out.print(decrypted[i][j]);
        }
    }

    public static void main(String[] args) {
		
        Scanner sc = new Scanner(System.in);
        String inputMessage = sc.nextLine();
        int n = sc.nextInt();
        Hello.decryptMessage(inputMessage, n);
	}
}