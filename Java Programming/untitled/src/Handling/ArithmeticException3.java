package Handling;

public class ArithmeticException3
{
    public static void main(String[] args) {
        try{
            int data = 50/0; // may throw exception
        }
        // try to handle the ArithmeticException using ArrayIndexOutOfBoundException
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e);
        }
        System.out.println("rest of the code");
    }
}
