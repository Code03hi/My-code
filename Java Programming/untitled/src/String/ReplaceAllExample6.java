package String;
//Even the null regular expression is also not accepted by the replaceAll() method as the NullPointerException is raised.
public class ReplaceAllExample6 {
    public static void main(String[] args) throws Exception{
        // input method
        String str = "JavaTpoint";
        String regex =  null ; // regular expression is null
        str = str.replaceAll(regex," ");
        System.out.println(str);
    }
}
