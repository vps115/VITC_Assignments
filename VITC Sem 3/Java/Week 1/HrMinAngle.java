import java.util.Scanner;
import java.lang.Math;
public class HrMinAngle {
    public static void main(String args[]) {
        int hr, min;
        double angle;
        Scanner o = new Scanner(System.in);

        System.out.println("Enter Hour:");
        hr = o.nextInt();
        System.out.println("Enter Minutes:");
        min = o.nextInt();

        angle = Math.abs((hr*30 + min*0.5)  - min*6);
        
        System.out.println("Angle between Hour and Minute hand of the Clock: "+angle);
    } 
}
