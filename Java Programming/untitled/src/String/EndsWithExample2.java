package String;

public class EndsWithExample2 {
    public static void main(String[] args) {
        String str = "Welcome to javatpoint.com";
        System.out.println(str.endsWith("point"));
        if (str.endsWith(".com"))
        {
            System.out.println("String ends with .com");
        }
        else
        {
            System.out.println("It does not end with .com");
        }
    }
}
