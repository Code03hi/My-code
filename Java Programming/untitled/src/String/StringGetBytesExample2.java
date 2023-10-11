package String;

public class StringGetBytesExample2 {
    public static void main(String[] args) {
        String s1 = "ABCDEFG";
        byte[] barr = s1.getBytes();
        for (int i = 0; i < barr.length; i++) {
            System.out.println(barr[i]);
        }
        // Getting string back
        String s2 = new String(barr);
        System.out.println(s2);
    }
}
