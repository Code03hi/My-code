package Handling;

// Java Program to Illustrate Exception Handling
// with Method Overriding
// Where SuperClass declares an exception and
// SubClass declares a child exception
// of the SuperClass declared Exception

// Importing required classes
import java.util.*;

class SuperClass3
{
    // superClass declares an exception
    void method() throws RuntimeException
    {
        System.out.println("SuperClass");
    }
}

// superclass inherited by the subclass
public class SubClass3 extends SuperClass3{
    void method() throws ArithmeticException
    {
        // subclass declaring a child exception
        // of runtimeException
        // so the compiler won't give an error
        System.out.println("Subclass");
    }
    // driver code
    public static void main(String [] args)
    {
        SuperClass3 s = new SuperClass3();
        s.method();
    }
}
