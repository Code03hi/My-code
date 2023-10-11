package String;

public class ConcatExample2 {
    public static void main(String[] args) {
        String s1 = "Bhagwan ";
        String s2 = "Jha";
        String s3 = " Lover";
        // Concatenating one string
        String s4 = s1.concat(s2);
        System.out.println(s4);
        // Concatenating multiple strings
        String str5 = s1.concat(s2).concat(s3);
        System.out.println(str5);

    }
}
