import java.util.Scanner;
public class Question4 {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.print("Enter Kilometer : ");
        float kilo = sc.nextFloat();
        double miles = kilo * 0.62137119;
        System.out.print("Miles : "+ miles);
    }
}
