package String;

public class IndexOfExample5 {
    public static void main(String[] args) {
        String str = "Welcome to JavaTpoint";
        int count = 0;
        int StartFrom = 0;
        for(; ;)
        {
            int index = str.indexOf('o',StartFrom);
            if (index >= 0)
            {
                // match looking after the searched index
                count = count + 1;
                // start looking after the searched index
                StartFrom = index + 1;
            }
            else
            {
                // the value of index is -1 here. Therefore, terminate the loop
                break;
            }
        }
        System.out.println("In the String : " + str);
        System.out.println("The '0' character has come " + count + " Times");
    }
}
