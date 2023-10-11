import java.util.Scanner;
public class Comparison {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int first,second;
        System.out.print("Enter First Number : ");
        first = sc.nextInt();
        System.out.print("Enter Second Number : ");
        second = sc.nextInt();
        if(first>second)
        {
            System.out.print("Greater : " + first);
        }
        if(first<second)
        {
            System.out.print("Greater : " + second);
        }
    }
}
