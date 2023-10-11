package String;
import java.util.Locale;

public class ToUpperCaseExample2 {
    public static void main(String[] args) {
        String s = "hello string";
        String turkish = s.toUpperCase(Locale.forLanguageTag("tr"));
        String english = s.toUpperCase(Locale.forLanguageTag("en"));
        System.out.println(turkish); // will print I with dot on upper side
        System.out.println(english);
    }
}
