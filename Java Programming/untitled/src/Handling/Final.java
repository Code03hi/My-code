package Handling;
//final is the keyword and access modifier which is used to apply restrictions on a class, method or variable.
import java.io.BufferedReader;
import java.io.InputStreamReader;

class B
{
    public int sum()
    {
        System.out.println("Hello i am a sum method");
        return 5;
    }
    final void show()
    {
        System.out.println("Hello i am a show method");
    }
}
class A extends B
{
    public int sum()
    {
        InputStreamReader in = new InputStreamReader(System.in);
        BufferedReader obj = new BufferedReader(in);
        System.out.print("Enter A : ");
        int a = obj.hashCode();
        System.out.print("Enter B : ");
        int b = obj.hashCode();
        return a+b;
    }
//    show() in Handling.A cannot override show() in Handling.B
//    overridden method is final
//    void show()
//    {
//        int add = sum();
//        System.out.println("Sum of number is : " + add);
//    }
}
public class Final {
    public static void main(String[] args) {
        B obj = new A();
        obj.show();
    }
}
