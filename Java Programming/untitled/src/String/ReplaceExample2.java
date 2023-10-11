package String;

public class ReplaceExample2 {
    public static void main(String[] args) {
        String str = "My name is Bhagwan jha My name is Java";
        String replaceString = str.replace("is","was"); // replace all occurrence of "is" to "was"
        System.out.println(replaceString);
    }
}
