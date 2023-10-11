package String;

public class EqualsExample4 {
    public static void main(String[] args) {
        // Strings
        String str = "a";
        String str1 = "123";
        String str2 = "45.89";
        String str3 = "false";
        Character c = new Character('a');
        Integer i = new Integer(123);
        Float f = new Float(45.89);
        Boolean b = new Boolean(false);
        // reference of the Character object is passed
        System.out.println(str.equals(c));
        // reference of the Integer object is passed
        System.out.println(str1.equals(i));
        // reference of the Float object is passed
        System.out.println(str2.equals(f));
        // reference of the Boolean object is passed
        System.out.println(str3.equals(b));
        // the above print statements show a false value because
        // we are comparing a String with different data types
        // to achieve the true value, we have to convert
        // the different data types into the string using the toString() method
        System.out.println(str.equals(c.toString()));
        System.out.println(str1.equals(i.toString()));
        System.out.println(str2.equals(f.toString()));
        System.out.println(str3.equals(b.toString()));
    }
}
