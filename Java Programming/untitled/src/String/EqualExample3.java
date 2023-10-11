package String;
import java.util.ArrayList;
public class EqualExample3 {
    public static void main(String[] args) {
        String str1 = "Bhagwan jha";
        ArrayList<String> list = new ArrayList<>();
        list.add("Ravi");
        list.add("Drishti");
        list.add("Megha");
        list.add("Bhagwan jha");
        list.add("Divyasha");
        for (String str: list)
        {
            if (str.equals(str1))
            {
                System.out.println("Bhagwan is present");
            }
        }
    }
}
