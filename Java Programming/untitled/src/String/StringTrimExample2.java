package String;
//        The example demonstrates the use of the trim() method. This method removes all the
//        trailing spaces so the length of the string also reduces. Let's see an example.
    public class StringTrimExample2 {
    public static void main(String[] args) {
        String str = " hello java string ";
        System.out.println(str.length());
        System.out.println(str); // without trim()
        String tr = str.trim();
        System.out.println(tr.length());
        System.out.println(tr);  // With trim()
    }
}
