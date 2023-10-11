package String;

public class CompareToExample3 {
    // main method
    public static void main(String[] args) {
        // input string in uppercase
        String st1 = new String("INDIA IS MY COUNTRY");
        // input string in lowercase
        String st2 = new String("india is my country");
        System.out.println(st1.compareTo(st2));
    }
}
