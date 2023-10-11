package Handling;

public interface MultipleCatchBlock1 {
    public static void main(String[] args) {
        try
        {
            int a [] = new int[5];
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
