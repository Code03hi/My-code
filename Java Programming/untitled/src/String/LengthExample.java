package String;

public class LengthExample {
    public static void main(String[] args) {
        String s1 = "Java";
        String s2 = "Developer";
        String s3 = String.join(" ",s1,s2);
        System.out.println("String length is : " + s1.length()); // 4 is the length of Java
        System.out.println("String length is : " + s2.length()); // 9 is the length of Developer
    }
}
