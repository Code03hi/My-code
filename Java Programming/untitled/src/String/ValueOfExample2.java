package String;
//This is a boolean version of overloaded valueOf() method. It takes boolean value and returns a string. Let's see an example.
public class ValueOfExample2 {
    public static void main(String[] args) {
        // boolean to string
        boolean bol = true;
        boolean bol1 = false;
        String s1 = String.valueOf(bol);
        String s2 = String.valueOf(bol1);
        System.out.println(s1);
        System.out.println(s2);
    }
}
