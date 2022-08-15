import java.util.Scanner;
import java.lang.Math;
public class MeanSD {
    public static void main(String args[]) {
        double m = 0, sdsum = 0, var, sd;
        Scanner o = new Scanner(System.in);

        int arr[] = new int[10];
        System.out.println("Enter Numbers:");
        for (int i = 0; i < 10; i++) {
            arr[i] = o.nextInt();
            m+=arr[i];
        }
        m /= 10;
        System.out.println("Mean: "+m);
        
        for (int i = 0; i < 10; i++) {
            sdsum += Math.pow(arr[i] - m, 2);
        }
        
        var = sdsum/10;
        sd = Math.pow(var, 0.5);
        System.out.println("Standard Deviation: "+sd);
    } 
}
