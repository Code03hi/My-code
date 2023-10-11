package Handling;
import java.io.*;

//    In case we declare the exception, if exception does not occur, the code will be executed fine.
//    In case we declare the exception and the exception occurs, it will be thrown at runtime because throws does not handle the exception.

class M1
{
    void method() throws IOException
    {
        System.out.println("Device operation performed");
    }
}
public class Throws3 {
    public static void main(String[] args) throws IOException{
            M1 m = new M1();
            m.method();
        System.out.println("normal flow....");
    }
}
