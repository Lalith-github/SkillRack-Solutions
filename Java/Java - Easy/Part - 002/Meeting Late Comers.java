import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().split(" ");
        // int arrivalTime = 10 * 60;
        int count = 0;
        for(String time : input){
            String[] timeArray = time.split(":");
            int hour = Integer.parseInt(timeArray[0]);
            int min = Integer.parseInt(timeArray[1]);
            
            if(hour > 10 || (hour == 10 && min > 0)) count ++;
        }
        System.out.println(count);
	}
}