package Handling;
import java.io.*;

//In case we handle the exception, the code will be executed fine whether exception occurs during the program or not.
class M
{
    void method() throws IOException
    {
        throw new IOException("Device error");
    }
}
public class Throws2 {
    public static void main(String[] args) {
        try
        {
            M m = new M();
            m.method();
        }
        catch(Exception e)
        {
            System.out.println("Exception handled");
        }
        System.out.println("Normal flow....");
    }
}
