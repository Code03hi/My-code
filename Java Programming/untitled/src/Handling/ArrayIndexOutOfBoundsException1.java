package Handling;

public class ArrayIndexOutOfBoundsException1 {
    public static void main(String[] args) {
        int [] data = {2,3,5};
        try
        {
            System.out.println(data[10]); // may throw exception
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e);
        }
        System.out.println("rest of the code");
    }
}
