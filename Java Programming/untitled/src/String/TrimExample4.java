package String;
//        Since strings in Java are immutable; therefore, when the trim() method manipulates the string by trimming the whitespaces,
//        it returns a new string. If the manipulation is not done by the trim() method, then the reference of the same string is returned.
public class TrimExample4 {
    public static void main(String[] args) {
        // the string contains white spaces
        // therefore, trimming the spaces leads to the
        // generation of new string
        String str = " abc ";
        // str1 stores a new string
        String str1 = str.trim();
        // the hashcode of str and str1 is different
        System.out.println(str.hashCode());
        System.out.println(str1.hashCode() + "\n");
        // no white space present in the string s
        // therefore, the reference of the s is returned
        // when the trim() method is invoked
        String s = "xyz";
        String s1 = s.trim();
        // the hashCode of s and s1 is the same
        System.out.println(s.hashCode());
        System.out.println(s1.hashCode());
    }
}
