package Handling;

// class represent user-defined exception
class UserDefineException extends Exception
{
    public UserDefineException(String str)
    {
        // calling constructor of parent Exception
        super(str);
    }
}
public class ThrowAble {
    public static void main(String[] args) {
        try
        {
            // throw an object of user defined Exception
            throw new UserDefineException("This is user-defined exception");
        }
        catch (UserDefineException ude)
        {
            System.out.println("Caught the exception");
            // print the message from MyException object
            System.out.println(ude.getMessage());
        }
    }
}
