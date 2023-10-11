package String;
import java.util.Locale;

public class ToLowerCaseExample2 {
    public static void main(String[] args) {
        String s = "JAVATPOINT HELLO stRIng";
        String eng = s.toLowerCase(Locale.ENGLISH);
        System.out.println(eng);
        String turkish = s.toLowerCase(Locale.forLanguageTag("tr")); // it shows i without dot
        System.out.println(turkish);
    }
}
