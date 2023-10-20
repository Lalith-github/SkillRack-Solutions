import java.util.*;

class Car implements Comparable<Car>{
    private String carName;
    private double mileage;
    
    public void setData(String name, double mileage){
        this.carName = name;
        this.mileage = mileage;
    }
    
    public void getName(){
        return this.carName;
    }
    
    @Override
    public int compareTo(Car car){
        if(this.mileage > car.mileage) return -1;
        else if (this.mileage < car.mileage) return 1;
        return 0;
    }
}

public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().split(" ");
        List<Car> list = new ArrayList<>();
        for(String cars: input){
            String[] carDetails = cars.split("@");
            Car c = new Car();
            c.setData(carDetails[0], Double.parseDouble(carDetails[1]));
            list.add(c);
        }
        Collections.sort(list);
        System.out.println(list.get(0).getName());
	}
}