package String;
//   The replace() method throws the NullPointerException when the replacement
//   or target is null. The following example confirms the same.
public class ReplaceExample3 {
    public static void main(String[] args) throws Exception{
        String str = "For learning Java, JavaTpoint is a very good site";
        int size =  str.length();
        System.out.println(str);
        String target = null;
        // replacing null with javaTpoint. Hence, the NullPointerException is raised;
        str = str.replace(target,"JavaTpoint");
        System.out.println(str);
    }
}
