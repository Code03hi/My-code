package String;
import java.util.*;
public class StringGetBytesExample34 {
    public static void main(String[] args) {
        // input string
        String str = "Welcome to JavaTpoint.";
        System.out.print("The input String is : ");
        System.out.println(str + '\n');
        // inside try block encoding is
        // being done using different charsets
        try
        {
//            16 - bit UCS Transformation format
            byte[] byteArr = str.getBytes("UTF-16");
            System.out.println("After converted into UTF-16 the String is : ");
            for (int i = 0; i < byteArr.length; i++)
            {
                System.out.println(byteArr[i]);
            }
            System.out.println("\n");
            // big Endian byte order, 16-bits UCS Transformation format
            byte[] byteArr1 = str.getBytes("UTF-16BE");
            System.out.println("After converted into UTF-16BE the string is : ");
            for (int i = 0; i < byteArr1.length; i++)
            {
                System.out.println(byteArr1[i]);
            }
            System.out.println("\n");
            // Little Endian byte order, 16-bits UCS Transformation format
            byte[] byteArr3 = str.getBytes("UTF-16LE");
            System.out.println("After converted into UTF-16LE the string is : ");
            for (int i = 0; i < byteArr3.length; i++)
            {
                System.out.println(byteArr3[i]);
            }
            System.out.println("Unsupported character set" );
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}
