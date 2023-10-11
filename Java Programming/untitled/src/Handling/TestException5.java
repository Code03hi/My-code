package Handling;
class Parent5
{
    void msg() throws Exception
    {
        System.out.println("Parent method");
    }
}
public class TestException5 {
    void msg()
    {
        System.out.println("Child method");
    }

    public static void main(String[] args) {
        Parent5 p = new Parent5();
        try {
            p.msg();
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
    }
}
