package Handling;
//Java finally block is a block used to execute important code such as closing the connection, etc.
public class FinallyBlock {
    public static void main(String[] args) {
        try
        {
            // below code do not throw any exception
            int data = 22/2;
            System.out.println(data);
        }
        // catch won't be executed
        catch(NullPointerException e)
        {
            System.out.println(e);
        }
        // executed regardless of exception occurred or not
        finally
        {
            System.out.println("Finally block is always executed");
        }
        System.out.println("Rest of phe code.....");
    }
}
