package Handling;

public class NumberFormatExceptionExample {
    public static void main(String[] args) {
        try
        {
            String s = "abc";
            int i = Integer.parseInt(s); // NumberFormatException
        }
        catch (NumberFormatException e)
        {
            e.printStackTrace();
        }
    }
}
