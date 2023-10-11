package Handling;

class Parent1
{
    void msg() throws ArithmeticException
    {
        System.out.println("Parent method");
    }
}

public class TestException2 extends Parent1{
//    java: msg() in Handling.TestException2 cannot override msg() in Handling.Parent1
//    overridden method does not throw java.lang.Exception
    void msg() // throws Exception
    {
        System.out.println("child method");
    }

    public static void main(String[] args) {
        Parent1 p = new Parent1();
        p.msg();
    }
}
