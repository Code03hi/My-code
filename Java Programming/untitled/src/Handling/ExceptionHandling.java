package Handling;
import java.io.IOException;
class Parent
{
    // defining the method
    void msg()
    {
        System.out.println("parent method");
    }
}
public class ExceptionHandling extends Parent{
    // overriding the method in child class
    // gives compile time error
//    java: msg() in Handling.ExceptionHandling cannot override msg() in Handling.Parent
//    overridden method does not throw java.io.IOException
    void msg()  // throws IOException
    {
        System.out.println("Child Class Exception");
    }

    public static void main(String[] args) {
        Parent p = new Parent();
        p.msg();
    }
}
