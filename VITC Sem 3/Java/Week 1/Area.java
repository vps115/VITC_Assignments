import java.util.Scanner;
public class Area {
    public static void main(String args[]) {
        double a, r;
        Scanner o = new Scanner(System.in);

        System.out.println("Enter Radius of the Circle:");
        r = o.nextDouble();
        
        a = 3.14*r*r;

        System.out.println("Area of the circle: "+a+" Unit Square");
    } 
}
