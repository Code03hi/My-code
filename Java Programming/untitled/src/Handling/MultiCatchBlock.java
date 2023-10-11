package Handling;

public class MultiCatchBlock {
    public static void main(String[] args) {
        try
        {
            int [] a = new int[5];
            a[5] = 30/0;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Arithmetic Exception occurs");
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println("ArrayIndexOutOfBounds Exception Occurs");
        }
        catch(Exception e)
        {
            System.out.println("Parent Exception Occurs");
        }
        System.out.println("Rest of the code");
    }
}
