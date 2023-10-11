package Handling;
//In this example, try block contains two exceptions. But at a time only one exception occurs and its corresponding catch block is executed.
public class MultipleCatchBlock2 {
    public static void main(String[] args) {
        try
        {
            int [] a = new int[5];
            a[5] = 30/0;
            System.out.println(a[10]);
        }
        catch (ArithmeticException e)
        {
            System.out.println("Arithmetic Exception Occurs");
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println("ArrayIndexOutOfBounds Exception Occurs");
        }
        catch (Exception e)
        {
            System.out.println("Parent Exception Occurs");
        }
        System.out.println("Rest of the code");
    }
}
