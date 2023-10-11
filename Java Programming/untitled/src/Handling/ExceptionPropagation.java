package Handling;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ExceptionPropagation {
    public static void method2(int a) throws ArithmeticException
    {
        int b = 0;
        System.out.println(a + " Divide By 0 " + a/b);
        throw new ArithmeticException();
    }
    public static void method1(int a)
    {
        method2(a);
    }
    public static void main(String[] args) {
        BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter The value of a : ");
        int a = obj.hashCode();
        method1(a);
    }
}
