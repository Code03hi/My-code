package Networking;
import java.net.*;
import java.io.*;
public class SocketExample {
    public static void main(String[] args) {
        try
        {
            ServerSocket ss = new ServerSocket(6666);
            Socket s = ss.accept(); // establishes connection
            DataInputStream dis = new DataInputStream(s.getInputStream());
            String str = (String)dis.readUTF();
            System.out.println("Message = " + str);
            ss.close();
        }
        catch (Exception ex)
        {
            ex.printStackTrace();
        }
    }
}
