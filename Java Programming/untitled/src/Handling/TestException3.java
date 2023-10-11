package Handling;

class Parent2
{
    void msg() throws Exception
    {
        System.out.println("Parent method");
    }
}

public class TestException3 {
    void msg() throws Exception
    {
        System.out.println("Child Method");
    }

    public static void main(String[] args) {
        Parent2 P = new Parent2();
        try
        {
            P.msg();
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }
}
