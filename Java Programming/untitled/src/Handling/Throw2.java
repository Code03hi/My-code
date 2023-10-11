package Handling;
import java.io.*;
public class Throw2 {
    // function to check if person is eligible to vote or not
    public static void method() throws FileNotFoundException
    {
        FileReader file = new FileReader("D:\\LANGUAGE\\Java Programming\\Java start\\src");
        BufferedReader fileInput = new BufferedReader(file);
        throw new FileNotFoundException();
    }

    public static void main(String[] args) {
        try
        {
            method();
        }
        catch (FileNotFoundException e)
        {
            e.printStackTrace();
        }
        System.out.println("Rest of the code");
    }
}
