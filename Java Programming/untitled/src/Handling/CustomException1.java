package Handling;

class MyCustomException extends Exception
{

}

public class CustomException1 {
    public static void main(String[] args) {
        try
        {
            // throw n object of user defined exception
            throw new MyCustomException();
        }
        catch (MyCustomException ex)
        {
            System.out.println("Caught the Exception");
            System.out.println(ex.getMessage());
        }
        System.out.println("Rest of the code");
    }
}
