package String;
//It is an overloaded method of the startWith() method that is used to pass an extra argument
//        (offset) to the function. The method works from the passed offset. Let's see an example.
public class StartsWithExample1 {
    public static void main(String[] args) {
        String str = "JavaTpoint";
        // no offset mentioned; hence, offset is 0 in this case
        System.out.println(str.startsWith("J")); // True
        // no offset mentioned; hence, offset is 0 in this case
        System.out.println(str.startsWith("a")); // False
        // offset is 1
        System.out.println(str.startsWith("a",1)); // True
    }
}
