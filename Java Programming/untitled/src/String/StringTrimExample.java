package String;
//        The Java String class trim() method eliminates leading and trailing spaces. The Unicode value of space character is '\u0020'.
//        The trim() method in Java string checks this Unicode value before and after the string, if it exists then the method
//        removes the spaces and returns the omitted string.
public class StringTrimExample {
    public static void main(String[] args) {
        String str = " hello string ";
        System.out.println(str + " JavaTPoint"); // without trim()
        System.out.println(str.trim() + " JavaTPoint"); // with trim()
    }
}
