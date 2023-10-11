package String;

public class IsEmptyExample6 {
    // main method
    public static void main(String[] args) {
        String str = "   ";
        int size = str.length();
        // trim the white spaces and after that
        // if the string results in the empty string
        // then the string is blank; otherwise, not
        if(size == 0)
        {
            System.out.println("The string is empty.");
        }
        else if(size > 0 && str.trim().isEmpty())
        {
            System.out.println("The string is blank");
        }
        else
        {
            System.out.println("The string is not blank.");
        }
        str = " Welcome to javaTpoint";
        size = str.length();
        if(size == 0)
        {
            System.out.println("The string is empty.");
        }
        else if(size > 0 && str.trim().isEmpty())
        {
            System.out.println("The string is blank.");
        }
        else
        {
            System.out.println("The string is not blank.");
        }
    }
}
