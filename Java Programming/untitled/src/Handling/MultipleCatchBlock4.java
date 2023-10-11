package Handling;

public class MultipleCatchBlock4 {
    public static void main(String[] args) {
        try {
            int [] a = new int[5];
            a[5] = 30/0;
        }
        catch (ArithmeticException e)
        {
            System.out.println("Task1 is completed");
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Task2 is completed");
        }
        catch (Exception e)
        {
            System.out.println("Common task completed");
        }
        System.out.println("Rest of code");
    }
}
