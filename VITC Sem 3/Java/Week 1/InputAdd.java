import java.util.Scanner;

public class InputAdd {
    public static void main(String args[]) {
        float a,b,c;
        Scanner o=new Scanner(System.in);

        System.out.println("Enter a: ");
        a = o.nextFloat();

        System.out.println("Enter b: ");
        b = o.nextFloat();

        c = a+b;
        System.out.println("Sum: "+c);
    }
}
