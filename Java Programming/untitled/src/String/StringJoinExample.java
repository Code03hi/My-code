package String;
//        The Java String class join() method returns a string joined with a given delimiter. In the String join() method,
//        the delimiter is copied for each element. The join() method is included in the Java string since JDK 1.8.
public class StringJoinExample {
    public static void main(String[] args) {
        String joinString1 = String.join("-","welcome","to","javatpoint");
        System.out.println(joinString1);
        String s1 = new String("Hello");
        String s2 = String.join(" ",s1,"Bhagwan");
        System.out.println(s2);
    }
}
