package Handling;

// Java Program to Illustrate Exception Handling
// with Method Overriding
// Where SuperClass declares an exception and
// SubClass declares without exception

// Importing required classes

import java.util.*;
import java.io.*;
class SuperClass4
{
    // superclass declares an exception
    void method() throws IOException
    {
        System.out.println("SuperClass");
    }
}

// SuperClass inherited by the SubClass
public class SubClass4 {
    // SubClass declaring without exception
    void method()
    {
        System.out.println("Subclass");
    }
    // Driver code
    public static void main(String [] args)
    {
        SuperClass4 s = new SuperClass4();
        try {
            s.method();
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }
    }
}
