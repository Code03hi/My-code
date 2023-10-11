package Handling;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

public class Finally {
    public static void main(String[] args) throws IOException{
        InputStreamReader obj = new InputStreamReader(System.in);
        BufferedReader buff = new BufferedReader(obj);
        System.out.print("Enter Numerator : ");
        int a = Integer.parseInt(buff.readLine());
        System.out.print("Enter Denominator : ");
        int b = Integer.parseInt(buff.readLine());
        try
        {
            int div = a/b;
        }
        catch (ArithmeticException e)
        {
            System.out.println("Exception handled");
            e.printStackTrace();
        }
        finally
        {
            System.out.println("finally block is always executed");
        }
        System.out.println("Rest of the code....");
    }
}
