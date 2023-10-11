package Handling;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.IOException;
public class PrintWriter1 {
    public static void main(String[] args) throws IOException{
        FileWriter fw = new FileWriter("Jha.txt");
        PrintWriter pw = new PrintWriter(fw);
        pw.println("Hello Here Bhagwan Jha is Available");
        pw.close();
        fw.close();
        System.out.println("File Writing Task Is SuccessFully");
    }
}
