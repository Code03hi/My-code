package String;

public class LengthExample4 {
    public static void main(String[] args) {
        String str = "Welcome To JavaTpoint";
        int sizeWithWhiteSpace = str.length();
        System.out.println("In the string : " + str + "");
        str = str.replace(" ","");
        int sizeWithoutWhiteSpace = str.length();
        // calculating the white spaces
        int noOfWhiteSpaces = sizeWithWhiteSpace - sizeWithoutWhiteSpace;
        System.out.println("Total number of whitespaces present are : " + noOfWhiteSpaces);
    }
}
