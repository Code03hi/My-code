package Handling;
//If we have a null value in any variable, performing any operation on the variable throws a NullPointerException.
public class NullPointerExceptionExample {
    public static void main(String[] args) {
        String s = null;
        try
        {
            System.out.println(s.length());
        }
        catch (NullPointerException e)
        {
            e.printStackTrace();
        }
    }
}
