package String;

public class EndsWithExample3 {
    public static void main(String[] args) {
        String str = "Welcome to JavaTpoint";
        // the result of the following display statement
        // show endsWith() considers the case Sensitiveness of
        // the characters of a string
        System.out.println(str.endsWith("javaTpoint")); // false because J and j are different
        System.out.println(str.endsWith("javatpoint")); // false because T and t are different
        System.out.println(str.endsWith("JavaTpoint")); // True because every character is same
    }
}
