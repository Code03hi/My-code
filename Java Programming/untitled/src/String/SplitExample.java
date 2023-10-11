package String;
//The java string split() method splits this string against given regular expression and returns a char array.
//The given example returns total number of words in a string excluding space only. It also includes special characters.
public class SplitExample{
    public static void main(String[] args) {
        String s1 = "java string split method by javatpoint";
        String[] words = s1.split("\\s"); // splits the string based on whitespace
        // using java foreach loop to print elements of string array
        for (String w:words)
        {
            System.out.println(w);
        }
    }
}
