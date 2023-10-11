package Handling;

// Java Program to illustrate Exception Handling
// with Method overriding
// where superclass doesn't declare any exception and
// SubClass declares exceptions other than the child exception of the SuperClass declared exception

import java.util.*;

class SuperClass2
{
    // superclass declares an exception
    void method() throws RuntimeException
    {
        System.out.println("SuperClass");
    }

}

public class SubClass2 extends SuperClass2{
    // subclass declaring an exception
    // which are not a child exception of RuntimeException


//    java: method() in Handling.SubClass2 cannot override method() in Handling.SuperClass2
//    overridden method does not throw java.lang.Exception
    void method() // throws Exception
    {
        // Exception is not a child exception
        // of the RuntimeException
        // so the compiler will give an error
        System.out.println("SubClass");
    }
    // Driver code
    public static void main(String[] args) {
        SuperClass2 s = new SuperClass2();
        s.method();
    }
}
