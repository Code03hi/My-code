package String;

public class FormatExample3 {
    public static void main(String[] args) {
        String str1 = String.format("%d",101);
        String str2 = String.format("[%10d]",101); // Specifying length of integer
        String str3 = String.format("[%-10d]",101); // left-justifying within the specified width
        String str4 = String.format("[% d]",101);
        String str5 = String.format("[%010d]",101); // filling with zeroes
        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);
        System.out.println(str4);
        System.out.println(str5);
    }
}
