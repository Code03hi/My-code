package Handling;
//       In this example, we generate NullPointerException, but didn't provide the corresponding exception type.
//        In such case, the catch block containing the parent exception class Exception will invoked.
public class MultipleCatchBlock3 {
    public static void main(String[] args) {
        try {
            String s = null;
            System.out.println(s);
            System.out.println(s.length());
        }
        catch (NullPointerException e)
        {
            System.out.println("NullPointerException Occurs");
            e.printStackTrace();
        }
        catch (ArithmeticException e)
        {
            System.out.println("Arithmetic Exception Occurs");
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println("ArrayIndexOutOfBounds Exception Occurs");
            e.printStackTrace();
        }
        catch (Exception e)
        {
            System.out.println("Parent Exception Occurs");
        }
        System.out.println("Rest of the code");
    }
}
