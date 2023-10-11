package String;
import java.util.*;

class Players
{
    private String name;
    // constructor of the class
    public Players(String str)
    {
        name = str;
    }
}
public class CompareToExample4 {
    public static void main(String[] args) {
        Players ronaldo = new Players("Ronaldo");
        Players sachin = new Players("Sachin");
        Players Dhoni = new Players("Dhoni");
        Players messi = new Players("messi");
        ArrayList<Players> al = new ArrayList<Players>();
        al.add(ronaldo);
        al.add(Dhoni);
        al.add(sachin);
        al.add(messi);
        // performing binary search on the list al
        Collections.binarySearch(al,"Sehwag",null);
    }
}
