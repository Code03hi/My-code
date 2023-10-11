package String;

public class LengthExample3  {
    public static void main(String[] args) throws Exception{
        String str = "Welcome To Island Of Relevance";
        int size = str.length();
        char ch ;
        System.out.println("Reverse of the string :" + "" + str + " is" );
        for (int i = 0; i < size; i++) {
            // printing in reverse order
            System.out.print(str.charAt(str.length() - i - 1));
        }
    }
}
