package String;

public class ContainsExample2 {
    public static void main(String[] args) {
        String str = "Hello javatpoint readers";
        String s = "javatpoint";
        boolean isContains = str.contains("javatpoint");
        System.out.println(isContains);
        isContains = str.contains("s");
        System.out.println(isContains);
        // case sensitive
        System.out.println(str.contains("Javatpoint")); // false
    }
}
