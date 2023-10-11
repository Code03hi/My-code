package String;

public class StringJoinExample5 {
    public static void main(String[] args) {
        String str = null;
        // one of the element is null however it will be treated as normal string
        str = String.join(" ",null,"hey","Bhagwan","how","are","you");
        System.out.println(str);
    }
}
