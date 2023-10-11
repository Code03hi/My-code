package String;
// It returns the last index of the substring from the fromIndex.
public class LastIndexOfExample2 {
    public static void main(String[] args) {
        String str = "THIS IS LAST INDEX OF EXAMPLE";
        int index = str.lastIndexOf('H',1);
        int index1 = str.lastIndexOf('h',1);
        System.out.println(index);
        System.out.println(index1);
        System.out.println("I am alive");
        // H and h are not same in lastIndexOf function of String it returns -1
    }
}
