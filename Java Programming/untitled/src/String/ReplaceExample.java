package String;
//    The Java String class replace() method returns a string replacing
//    all the old char or CharSequence to new char or CharSequence.
public class ReplaceExample {
    public static void main(String[] args) {
        String str = "Welcome To Island Of Relevance";
        String replaceString = str.replace('a','e');
        System.out.println(replaceString);
    }
}
