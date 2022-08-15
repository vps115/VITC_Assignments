import java.util.Scanner;
import java.lang.Math;

public class RightTri {
    public static void main(String args[]) {
        int a, b, c;
        Scanner o = new Scanner(System.in);

        System.out.println("Enter Side A of the triangle:");
        a = o.nextInt();
        System.out.println("Enter Side B of the triangle:");
        b = o.nextInt();
        System.out.println("Enter Side C of the triangle:");
        c = o.nextInt();
        
        if (a + b < c || a + c < b || b + c < a) {
            System.out.println("Cannot form a Triangle with given Sides.");
        }
        else {
            double a2, b2, c2;
            a2 = Math.pow(a, 2);
            b2 = Math.pow(b, 2);
            c2 = Math.pow(c, 2);

            if (a2 + b2 == c2 || b2 + c2 == a2 || a2 + c2 == b2) {
                System.out.println("Given Sides form a Right Triangle.");
            }
            else {
                System.out.println("Given Sides Do Not form a Right Triangle.");
            }
        }
    }
}
