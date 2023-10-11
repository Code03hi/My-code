package Handling;

public class NestedTryBlock1 {
    public static void main(String[] args) {
        // outer (main) try block
        try
        {
            // inner try block 1
            try
            {
                // inner try block 2
                try
                {
                    int [] arr = {1,2,3,4};
                    // printing the array elements out of its bounds
                    System.out.println(arr[10]);
                }
                // to handle ArithmeticException
                catch (ArithmeticException e)
                {
                    System.out.println("Arithmetic Exception ");
                    System.out.println("Inner try block 1");
                }
            }
            // to handle ArrayIndexOutOfBoundsException
            catch (ArrayIndexOutOfBoundsException e2)
            {
                System.out.println(e2);
                System.out.println("Outer (main) try block");
            }
        }
//        try
//        {
//            String s = null;
//            System.out.println(s.length());
//        }
        catch (Exception e3)
        {
            System.out.println("Exception");
            System.out.println("Handle in main try-block");
        }
    }
}
