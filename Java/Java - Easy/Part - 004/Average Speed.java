import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String[] input = sc.nextLine().split(" ");
		int distance = 0, time = 0;
		for(String data: input){
		    String[] parsedData = data.split("@");
		    distance += Integer.parseInt(parsedData[0]);
		    time += Integer.parseInt(parsedData[1]);
		}
		System.out.format("%.2f kmph",(double) distance / (double) time);

	}
}