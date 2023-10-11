package InputOutput;
//        Java BufferedWriter class is used to provide buffering for Writer instances. It makes the performance fast. It inherits Writer class.
//        The buffering characters are used for providing the efficient writing of single arrays, characters, and strings.

import java.io.*;
public class BufferedReaderExample {
    public static void main(String[] args) throws IOException{
        FileWriter writer = new FileWriter("Data.txt");
        BufferedWriter bufferedWriter = new BufferedWriter(writer);
        bufferedWriter.write("Welcome in island of Relevance");
        bufferedWriter.close();
        System.out.println("Success....");
    }
}
