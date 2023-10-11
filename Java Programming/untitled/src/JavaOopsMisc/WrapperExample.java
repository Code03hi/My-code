package JavaOopsMisc;
// java program to convert primitive into objects
// Autoboxing example of int to integer

//The automatic conversion of primitive data type into its corresponding wrapper class is known as autoboxing,
//for example, byte to Byte, char to Character, int to Integer, long to Long, float to Float, boolean to
//Boolean, double to Double, and short to Short.
public class WrapperExample {
    public static void main(String[] args) {
        // Converting int into integer
        int a = 20;
        Integer i = Integer.valueOf(a); // converting int into integer explicitly
        Integer j = a; // autoboxing, now compiler will write Integer.valueOf(a) internally
        System.out.println(a + " " + i + " " + j);
    }
}
