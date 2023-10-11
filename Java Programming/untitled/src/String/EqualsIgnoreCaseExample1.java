package String;
import java.util.ArrayList;
public class EqualsIgnoreCaseExample1 {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        String str = "Bhagwan";
        String str1 = "Divyasha";
        String str2 = "Drishti";
        list.add("Bhagwan");
        list.add("Megha");
        list.add("Drishti");
        for (String s : list)
        {
            if (str.equalsIgnoreCase(s))
            {
                System.out.println("Bhagwan is present ");
            }
            else if (str1.equalsIgnoreCase(s))
            {
                System.out.println("Divyasha is present ");
            }
            else if (str2.equalsIgnoreCase(s))
            {
                System.out.println("Drishti is present ");
            }
            else
            {
                System.out.println("Nobody is present in the list");
            }
        }
    }
}
