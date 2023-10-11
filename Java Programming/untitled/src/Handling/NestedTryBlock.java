package Handling;
//        In Java, using a try block inside another try block is permitted. It is called as nested try block.
//        Every statement that we enter a statement in try block, context of that exception is pushed onto the stack.
public class NestedTryBlock {
    public static void main(String[] args) {
        // outer try block
        try {
            // inner try block 1
            try {
                System.out.println("Going to divide by 0");
                int b = 39 / 0;
            } catch (ArithmeticException e) {
                System.out.println(e);
            }
            // inner try block 2
            try {
                int[] a = new int[5];
                // assigning the value out of array bounds
                a[5] = 4;
            }
            // catch block of inner try block 2
            catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e);
            }
            System.out.println("Other Statement");
        }
        catch (Exception e) {
            System.out.println("Handle the Exception (Outer catch)");
        }
        System.out.println("Normal flow");
    }
}
