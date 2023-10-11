package String;

public class IndexOfExample3 {
    public static void main(String[] args) {
        String s1 = "This is indexOf method";
        // passing substring and index
        int index = s1.indexOf("method",10); // return the index of this substring
        System.out.println("index of substring " + index);
        index = s1.indexOf("method",20); // it returns -1 if substring does not found
        System.out.println("index of substring " + index);
    }
}
