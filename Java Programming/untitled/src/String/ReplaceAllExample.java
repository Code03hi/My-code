package String;
//   The Java String class replaceAll() method returns a string replacing
//   all the sequence of characters matching regex and replacement string.
public class ReplaceAllExample {
    public static void main(String[] args) {
        String s1 = "JavaTpoint is a very good website";
        String replaceString = s1.replaceAll("a","e"); // replace all occurrence of "a" to "e"
        System.out.println(replaceString);
    }
}
