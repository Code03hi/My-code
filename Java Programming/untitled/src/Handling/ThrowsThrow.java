package Handling;
//        The throw and throws is the concept of exception handling where the throw keyword throw the exception explicitly
//        from a method or a block of code whereas the throws keyword is used in signature of the method.
public class ThrowsThrow {
    public static void method() throws ArithmeticException
    {
        System.out.println("Inside the method()");
        throw new ArithmeticException("Throwing ArithmeticException");
    }
    public static void main(String[] args) {
        try
        {
            method();
        }
        catch (ArithmeticException e)
        {
            System.out.println("Caught in main() method");
        }
    }
}
