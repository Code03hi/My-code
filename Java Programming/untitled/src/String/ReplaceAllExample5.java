package String;
//The replaceAll() method can also be used to insert spaces between characters.
public class ReplaceAllExample5 {
    public static void main(String[] args) {
        String str = "JavaTpoint";
        System.out.println(str);
        // input string
        String regex = "";
        // adding a white space before and after every character of the input string
        str = str.replaceAll(regex," ");
        System.out.println(str);
    }
}
