package String;
// It returns the last index of the substring.
public class LastIndexOfExample1 {
    public static void main(String[] args) {
        String s1 = "This is sunday of example"; // there are 2 's' character in this sentence
        int index = s1.lastIndexOf("s"); // returns last index of 's' char value
        System.out.println(index); // 8
    }
}
