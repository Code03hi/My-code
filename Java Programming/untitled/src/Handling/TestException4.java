package Handling;
class Parent4
{
    void msg() throws Exception
    {
        System.out.println("Parent method");
    }
}

public class TestException4 {
    void msg() throws ArithmeticException
    {
        System.out.println("Child method");
    }

    public static void main(String[] args) {
        Parent4 p = new Parent4();
        try {
            p.msg();
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
    }
}
