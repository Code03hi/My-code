package String;

public class LengthExample2 {
    public static void main(String[] args) {
        String s1 = "Java Developer";
        if (s1.length() > 0)
        {
            System.out.println("String is not empty and length is : " + s1.length());
        }
        s1 = "";
        if (s1.length() == 0)   
        {
            System.out.println("String is empty now : " + s1.length());
        }
    }
}
