import java.io.*;
public class Buffer_Read {
    public static void main(String[] args) throws IOException
    {
        int a,b,sum;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter First Number : ");
        a = Integer.parseInt(br.readLine());
        System.out.println("Enter Second Number : ");
        b = Integer.parseInt(br.readLine());
        sum = a + b;
        System.out.println("Sum of Two Positive Number : " + sum);
    }
}
