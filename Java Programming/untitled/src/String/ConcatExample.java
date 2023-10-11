package String;

public class ConcatExample {
    public static void main(String[] args) {
        String s1 = "Java string";
        // The string s1 does not get changed, even though it is invoking method
        // concat(), as it is immutable. therefore, the explicit assignment is required here.
        s1.concat("is immutable");
        System.out.println(s1);
        s1 = s1.concat(" is immutable so assign it explicitly");
        System.out.println(s1);
    }
}
