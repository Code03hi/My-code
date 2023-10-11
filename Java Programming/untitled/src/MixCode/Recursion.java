import java.util.Scanner;
public class Recursion {
    static int Factorial(int a)
    {
        if(a==1 || a==0)
        {
            return 1;
        }
        else {
            return a * (Factorial(a - 1));
        }
    }
    public static void main(String[] args) {
        Scanner sc =  new Scanner (System.in);
        System.out.println("Enter Number : ");
        int factorial = sc.nextInt();
        System.out.println("Factorial of " + factorial + " : " + Factorial(factorial));
    }
}
