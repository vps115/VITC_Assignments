import java.util.Scanner;
public class CtoF {
    public static void main(String args[]) {
        double c, f;
        Scanner o = new Scanner(System.in);

        System.out.println("Enter Temperature in C:");
        c = o.nextDouble();
        f = (c*9)/5 + 32;

        System.out.println(c+"C = "+f+"F");
    }
}
