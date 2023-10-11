package String;

public class SplitExample3 {
    public static void main(String[] args) {
        String str = "Javatpointtt";
        System.out.println("Returning words : ");
        String[] arr = str.split("t",0);
        for (String w:arr)
        {
            System.out.println(w);
        }
        System.out.println("Split array length : " + arr.length);
    }
}
