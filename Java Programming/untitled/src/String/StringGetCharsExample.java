package String;

public class StringGetCharsExample {
    public static void main(String[] args) {
        String str =  new String("Hello javatpoint how r u");
        char[] ch =new char[10];
        try {
            str.getChars(6,16,ch,0);
//            str.getChars(6,16,ch,2); // StringIndexOutOfBoundsException
            System.out.println(ch);
        }
        catch(Exception ex)
        {
            System.out.println(ex);
        }
    }
}
