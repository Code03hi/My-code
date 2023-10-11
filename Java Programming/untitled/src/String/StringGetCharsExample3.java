package String;

public class StringGetCharsExample3 {
    public static void main(String[] args) {
        String str = "Welcome to JavaTpoint";
        // creating a char array of size 25
        char[] chArr = new char[25];
        // start and end indices are same
        int srcBeingIndex = 11;
        int srcEndIndex = 11;
        int dstBeingIndex = 2;
        try
        {
            // invoking the method getChars()
            str.getChars(srcBeingIndex,srcEndIndex,chArr,dstBeingIndex);
            System.out.println(chArr);
        }
        catch (Exception excpn)
        {
            System.out.println(excpn);
        }
        System.out.println("The getChars() method print nothing as start and end indices are equal.");
    }
}
