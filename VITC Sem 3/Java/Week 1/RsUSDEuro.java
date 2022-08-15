import java.util.Scanner;
public class RsUSDEuro {
    public static void main(String args[]) {
        double rs, eur, usd;
        Scanner o = new Scanner(System.in);

        System.out.println("Enter Amount in Rupees:");
        rs = o.nextDouble();
        eur = 0.012*rs;
        usd = 0.013*rs;

        System.out.println("Rs "+rs+" = "+eur+" Euros");
        System.out.println("Rs "+rs+" = "+usd+" US Dollars");
    }
}