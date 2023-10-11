import java.util.Scanner;
public class Switch_Statement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Age : ");
        int age = sc.nextInt();
        switch (age)
        {
            case 1:
                System.out.println("You are Experienced");
                break;
        }
        System.out.print("Enter Year : ");
        int year = sc.nextInt();
        if (year%4==0 && year%100!=0)
        {
            System.out.println("Leap Year : "+ year);
        }
    }
}
