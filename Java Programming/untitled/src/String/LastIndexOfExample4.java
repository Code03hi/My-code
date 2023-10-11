package String;
// It returns the last index of the substring from the fromIndex.
public class LastIndexOfExample4 {
    public static void main(String[] args) {
        String str = "This is last index of example";
        int index = str.lastIndexOf("of",18);
        System.out.println(index);
        index = 0;
        System.out.println(index);
        index = str.lastIndexOf("of",18);
        System.out.println(index); // -1, if not found
        index = str.indexOf("of",20);
        System.out.println(index);
    }
}
