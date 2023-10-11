package String;

public class SubStringExample2 {
    public static void main(String[] args) {
        String s1 = "JavaTPoint";
        String subStr = s1.substring(0); // Start with 0 and goes to end
        System.out.println(subStr);
        String subStr2 = s1.substring(5,10); // Starts from 5 and goes to 10
        System.out.println(subStr2);
        String subStr3 = s1.substring(5,15); // Returns Exception
    }
}
