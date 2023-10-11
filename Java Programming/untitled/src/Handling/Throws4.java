package Handling;
import java.io.*;
class M2
{
    void method() throws IOException
    {
        throw new IOException("Device error");
    }
}

public class Throws4 {
    public static void main(String[] args) throws IOException{
        M2 m = new M2();
        m.method();
        System.out.println("Normal Flow");
    }
}
