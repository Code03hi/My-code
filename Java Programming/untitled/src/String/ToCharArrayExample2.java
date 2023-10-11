package String;

public class ToCharArrayExample2 {
    public static void main(String[] args) {
        String s1 = "Welcome to javatpoint";
        char[] ch = s1.toCharArray();
        int len = ch.length;
        System.out.println("Char array length : " + len);
        System.out.println(ch[0]);
        System.out.println("Char Array elements : " );
        for (int i = 0; i < len; i++) {
            System.out.println(ch[i]);
        }
    }
}
