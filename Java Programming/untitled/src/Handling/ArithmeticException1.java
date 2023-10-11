package Handling;

public class ArithmeticException1 {
    public static void main(String[] args) {
        try
        {
            int data = 500 /0; // may throw exception
            // if exception occurs, the remaining statement will not execute
            System.out.println("rest of the code");
        }
        catch (ArithmeticException e)
        {
            System.out.println(e);
        }
    }
}
