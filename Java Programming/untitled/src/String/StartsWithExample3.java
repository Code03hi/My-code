package String;
//If we adding an empty string at the beginning of a string, then it has no impact at all on the string.
//
//        "" + "Tokyo Olympics" = "Tokyo Olympics"s
//
//        It means one can say that a string in Java always starts with the empty string. Let's confirm the same with the help of Java code.
public class StartsWithExample3 {
    public static void main(String[] args) {
        // input string
        String str = "Tokyo Olympic";
        if (str.startsWith(""))
        {
            System.out.println("The string starts with the empty string.");
        }
        else
        {
            System.out.println("The string does not start with empty string.");
        }
    }
}
