package String;

public class InternExample {
    public static void main(String[] args) {
        String s1 = new String("Hello");
        String s2 = "Hello";
        String s3 = s1.intern(); // returns string from pool, now it will be same as s2
        System.out.println(s1==s2); // false because reference variable are pointing to different instance
        System.out.println(s2==s3); // true because reference variable are pointing to same instance
    }
}
