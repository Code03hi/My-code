package String;

public class IndexOfExample2 {
    public static void main(String[] args) {
        String s1 = "This is indexOf method";
        // passing SubString
        int index = s1.indexOf("method"); // Returning the index of this substring
        System.out.println("Index of substring " + index);
    }
}
