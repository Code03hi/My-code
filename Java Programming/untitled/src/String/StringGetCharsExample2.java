package String;

public class StringGetCharsExample2 {
    public static void main(String[] args) {
        String str = new String("Welcome to Javatpoint");
        char[] ch = new char[20];
        try
        {
            str.getChars(0,26,ch,0);
        }
        catch (StringIndexOutOfBoundsException ex)
        {
            System.out.println(ex);
        }
    }
}
