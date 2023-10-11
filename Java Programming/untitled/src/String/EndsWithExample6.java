package String;

public class EndsWithExample6 {
    public static void main(String[] args) {
        // invoking the method endsWith() using the string literal
        if ("Welcome to JavaTpoint".endsWith(""))
        {
            System.out.println("Inside the if block");
        }
        else
        {
            System.out.println("Inside the else block");
        }
        if ("Welcome to JavaTpoint".endsWith("point"))
        {
            System.out.println("Inside the if block");
        }
        else
        {
            System.out.println("Inside the else block");
        }
        if ("Welcome to JavaTpoint".endsWith("xyz"))
        {
            System.out.println("Inside the if block");
        }
        else
        {
            System.out.println("Inside the else block");
        }
    }
}
