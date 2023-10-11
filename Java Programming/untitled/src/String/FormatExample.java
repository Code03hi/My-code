package String;

public class FormatExample {
    public static void main(String[] args) {
        String name = "Bhagwan jha";
        String sf1 = String.format("Name is %s",name);
        String sf2 = String.format("Value is %f",32.33434);
        String sf3 = String.format("Value is %32.12f",32.33434); // returns 12 char fractional part filling with 0
        System.out.println(sf1);
        System.out.println(sf2);
        System.out.println(sf3);
    }
}
