package String;

public class CharAtExample3 {
    public static void main(String[] args) {
        String str = "Welcome to my island";
        int strLength = str.length();
        // fetching first character
        System.out.println("Character at 0 index is : " + str.charAt(0));
        // The last character is present at the string length-1 index
        System.out.println("Character at last index is : " + str.charAt(strLength - 1));
    }
}
