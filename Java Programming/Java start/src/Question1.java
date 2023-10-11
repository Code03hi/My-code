import java.util.Scanner;
public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b,c,sum;
        System.out.print("Enter First : ");
        a = sc.nextInt();
        System.out.print("Enter Second : ");
        b = sc.nextInt();
        System.out.print("Enter Third : ");
        c = sc.nextInt();
        sum = a + b + c;
        System.out.print("Sum of Three Number : ");
        System.out.print(sum);
    }
}
