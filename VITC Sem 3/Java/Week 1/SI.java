import java.util.Scanner;
public class SI {
    public static void main(String args[]) {
        float p, r, t, si;
        Scanner o = new Scanner(System.in);

        System.out.println("Enter Principal Amount:");
        p = o.nextFloat();

        System.out.println("Enter Rate:");
        r = o.nextFloat();

        System.out.println("Enter Time: ");
        t = o.nextFloat();

        si = (p*r*t)/100;

        System.out.println("Simple Interest: "+si);
    } 
}
