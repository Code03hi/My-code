package Handling;

// Java program to Illustrate Exception Handling
// With Method overriding
// where superclass does not declare any exception and
// subclass declare checked exception
// importing required classes

import java.io.*;

class SuperClass
{
    // Superclass doesn't declare any exception
    void method()
    {
        System.out.println("Superclass");
    }
}

// superclass inherited by the subclass
public class SubClass extends SuperClass{
    // method() declaring checked Exception IOException

//    java: method() in Handling.SubClass cannot override method() in Handling.SuperClass
//    overridden method does not throw java.lang.Exception
    void method() // throws Exception
    {
        // IOException is of type checked Exception
        // so will compiler will give error
        System.out.println("Subclass");
    }
    // Driver class
    public static void main(String [] args)
    {
        SuperClass s = new SuperClass();
        s.method();
    }
}
