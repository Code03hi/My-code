package String;
//The trim() can be used to check whether the string only contains white spaces or not. The following example shows the same.
public class TrimExample3 {
    public static void main(String[] args) {
        String str = " abc ";
        if (str.trim().length() > 0)
        {
            System.out.println("The string contains characters other than white spaces \n");
        }
        else
        {
            System.out.println("The string contains only white spaces \n");
        }
        str = " ";
        if (str.trim().length() > 0)
        {
            System.out.println("The string contains character other than white spaces \n");
        }
        else
        {
            System.out.println("The string contains only white spaces \n");
        }
    }
}
