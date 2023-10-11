package Handling;

public class ArrayIndexOutOfBoundsExceptionExample {
    public static void main(String[] args) {
        try
        {
            int a[] = new int[5];
            a[10] = 50;
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            e.printStackTrace();
        }
    }
}
