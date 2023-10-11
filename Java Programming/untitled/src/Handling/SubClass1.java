package Handling;
// Java Program to illustrate Exception Handling
// with Method overriding
// where superclass doesn't declare any exception and
// subclass declare Unchecked exception
// importing required classes

import java.util.*;

class SuperClass1
{
    // Superclass doesn't declare any exception
    void method()
    {
        System.out.println("Superclass");
    }
}

// superclass inherited by the subclass
public class SubClass1 {
    // method() declaring unchecked Exception ArithmeticException
    void method() throws ArithmeticException
    {
        // ArithmeticException is of type Unchecked Exception
        // so the compiler won't give any error
        System.out.println("SubClass");
    }
    // Driver code
    public static void main(String [] args)
    {
        SuperClass1 s = new SuperClass1();
        s.method();
    }
}
