package String;

public class FormatExample2 {
    public static void main(String[] args) {
        String str1 = String.format("%d",101); // Integer value
        String str2 = String.format("%s","Bhagwan jha"); // String value
        String str3 = String.format("%f",101.00); // Float value
        String str4 = String.format("%x",101); // Hexadecimal Value
        String str5 = String.format("%c",'c'); // Char value
        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);
        System.out.println(str4);
        System.out.println(str5);
    }
}
