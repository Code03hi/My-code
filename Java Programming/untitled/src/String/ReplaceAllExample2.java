package String;
//Let's see an example to replace all the occurrences of a single word or set of words.
public class ReplaceAllExample2 {
    public static void main(String[] args) {
        String str = "My name is Bhagwan jha. My name is Rahul Rawat. My name is Nitin";
        String replaceString = str.replaceAll("is","was"); // replace all occurrence of is to was
        System.out.println(str);
    }
}
