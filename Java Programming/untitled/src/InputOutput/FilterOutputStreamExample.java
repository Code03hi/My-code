package InputOutput;
//        Java FilterOutputStream class implements the OutputStream class. It provides different sub classes such as BufferedOutputStream and
//        DataOutputStream to provide additional functionality. So it is less used individually.

import java.io.*;
public class FilterOutputStream{
    public static void main(String[] args) throws Exception{
        File data = new File("Data.txt");
        FileOutputStream file = new FileOutputStream(data);
        BufferedOutputStream filter = new BufferedOutputStream(file);
        String s = "Welcome to Island Relevance";
        byte[] b = s.getBytes();
        filter.write(b);
        filter.flush();
        filter.close();
        System.out.println("Success....");
    }
}

