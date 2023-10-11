import java.util.*;
import java.text.*;

public class So1 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();

        // Write your code here.
        NumberFormat usFormat = NumberFormat.getCurrencyInstance(Locale.US);
        String usPay = usFormat.format(payment);
        NumberFormat indiaFormat = NumberFormat.getCurrencyInstance(new Locale("en","IN"));
        String indiaPay = indiaFormat.format(payment);
        NumberFormat chinaFormat = NumberFormat.getCurrencyInstance(Locale.CHINA);
        String chinaPay = chinaFormat.format(payment);
        NumberFormat franceFormat = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        String francePay = franceFormat.format(payment);

        // error in india currency????

        System.out.println("US: " + usPay);
        System.out.println("India: " + indiaPay);
        System.out.println("China: " + chinaPay);
        System.out.println("France: " + francePay);
    }
}

