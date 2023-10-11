package String;
//The startsWith() method considers the case-sensitivity of characters. Consider the following example.
public class StartsWithExample2 {
    public static void main(String[] args) {
        // main method
        String str = "Java string split method by javaTpoint";
        System.out.println(str.startsWith("ja")); //true
        System.out.println(str.startsWith("java string")); // true
        System.out.println(str.startsWith("Java string")); // false because J and j are different
    }
}
