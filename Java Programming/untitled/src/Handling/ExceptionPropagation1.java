package Handling;
import java.io.IOException;

//        An exception is first thrown from the top of the stack and if it is not caught, it drops down the call stack to the previous method.
//        If not caught there, the exception again drops down to the previous method, and so on until they are caught or until they reach the
//        very bottom of the call stack. This is called exception propagation.
public class ExceptionPropagation1 {
    void m() throws IOException
    {
        throw new java.io.IOException("device error");//checked exception
    }
    void n() throws IOException
    {
        m();
    }
    void p()
    {
        try
        {
            n();
        }
        catch(Exception e)
        {
            e.printStackTrace();
            System.out.println("Exception handled");
        }
    }

    public static void main(String[] args) {
        ExceptionPropagation1 obj = new ExceptionPropagation1();
        obj.p();
        System.out.println("normal flow");
    }
}
