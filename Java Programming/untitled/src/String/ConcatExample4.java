package String;
// Java program that show how to add
// a string at the beginning of another string

public class ConcatExample4 {
    // main method
    public static void main(String[] args) {
        String str = "Country";
        // we have added the string "India is my" before the string str;
        // also, observed that a string literal can also invoke the concat() method
        String s = "India is my ".concat(str);
        // displaying the string
        System.out.println(s);
    }
}
