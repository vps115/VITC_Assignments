import java.util.Scanner;
import java.lang.Math;
public class RsBTC {
    public static void main(String args[]) {
        double rs, btc;
        Scanner o = new Scanner(System.in);

        System.out.println("Enter Amount in Rupees:");
        rs = o.nextDouble();
        btc = 5.15*(Math.pow(10, -7))*rs;

        System.out.println("Rs "+rs+" = "+btc+" BTC");
    }
}