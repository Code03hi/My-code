public class String_Methods {
    public static void main(String[] args) {
        String name = "BHAGWAN";
        int length = name.length();
        // Returns the length of a specified string
        System.out.println("Length of String : "+ length);
        // Returns the character at the specified index (position)
        // String myStr = "Hello";
        // char result = myStr.charAt(0);
        // System.out.println(result);
        String lower = name.toLowerCase();
        String Upper = name.toUpperCase();
        System.out.println("Lower of String : "+ lower);
        System.out.println("Lower of String : "+ Upper);
        String nonTrimString = "    Bhagwan    Jha";
        String Trim = nonTrimString.trim();
        System.out.println(Trim);
        System.out.println(name.substring(0));
        System.out.println(name.replace('B','h'));
        System.out.println(name.replace("BHA","AHB"));

        System.out.println(name.startsWith("h"));
        System.out.println(name.endsWith("h"));

        System.out.println(name.charAt(2));

        String modifiedName = "Bhgaawanj";
        System.out.println(modifiedName.indexOf("gaa"));
        System.out.println(modifiedName.indexOf("gaa",2));
        System.out.println(modifiedName.lastIndexOf("gaa",5));

        System.out.println(name.equals("BHAGWAN"));
        System.out.println(name.equalsIgnoreCase("bhagwan"));

        System.out.println("I am escape sequence \" double quote");
        System.out.println("I am escape sequence \\ double quote");
    }
}
