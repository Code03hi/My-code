import java.util.Scanner;
public class String_01 {
    public static void main(String[] args) {
        Scanner st = new Scanner(System.in);
        String sc = "BHAGWAN JHA";
        String lower = sc.toLowerCase();
        System.out.println("Lower Case : " + lower);
        System.out.println(sc.replace(" ","_"));
        String letter = "Dear <|name|> , Thanks a lots!";
        letter = letter.replace("<|name|>","Bhagwan jha");
        System.out.println(letter);
        String Mystring = "This string contains    double and triple space ";
        System.out.println(Mystring.indexOf("  "));
        System.out.println(Mystring.indexOf("   "));
        String Myletter = "Dear Bhagwan, \nthis Java course is nice. \nThanks ";
        System.out.println(Myletter);
    }
}
