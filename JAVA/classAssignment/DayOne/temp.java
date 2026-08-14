
import java.util.*;


class temp{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter The Temprature in Celcius to See The Converted Result in Fahrenheit: ");
        double c=sc.nextDouble();
        double f= ((c*(9/5.0))+32);
        System.out.println("The Temp in Fahrenheit is: "+ f);

    }
}
