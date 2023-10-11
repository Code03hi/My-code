package String;

public class IsEmptyExample5 {
    public static void main(String[] args) {
        String str = "";
        try {
            if (str.isEmpty())
            {
                System.out.println("The string is empty");
            }
        }
        catch (NullPointerException ex)
        {
            System.out.println(ex);
        }
    }
}
