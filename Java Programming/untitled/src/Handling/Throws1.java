package Handling;
//        The Java throws keyword is used to declare an exception. It gives an information to the programmer that there may occur an exception.
//        So, it is better for the programmer to provide the exception handling code so that the normal flow of the program can be maintained.
import java.io.IOException;
public class Throws1 {
    void m() throws IOException
    {
        throw new IOException("Hello World"); // checked exception
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
        catch (Exception e)
        {
            e.printStackTrace();
            System.out.println("Exception handled");
        }
    }

    public static void main(String[] args) {
        Throws1 obj = new Throws1();
        obj.p();
        System.out.println("Normal flow.....");
    }
}
