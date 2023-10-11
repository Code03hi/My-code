package String;

public class ContainsExample4 {
    // main method
    public static void main(String[] args) {
        String str = "Welcome to JavaTpoint";
        // comparing a string to null
        try
        {
            if (str.contains(null))
            {
                System.out.println("Inside the if block");
            }
        }
        catch (NullPointerException e)
        {
            System.out.println(e);
            {
                System.out.println("Inside the else block");
            }
        }

    }
}
