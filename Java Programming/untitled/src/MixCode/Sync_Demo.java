// A java program to demonstrate working of
// synchronized
import java.io.*;
import java.util.*;

// class used to send a message

class Sender
{
    public void send(String msg)
    {
        System.out.println("Sending\t" + msg);
        try
        {
            Thread.sleep(1000);
        }
        catch(InterruptedException e)
        {
            System.out.println("Thread interrupted .");
        }
        System.out.println("\n " + msg + " Sent");
    }
}

class ThreadedSend extends Thread
{
    private String msg;
    Sender sender;
    // Receives a message object and a string
    // message to be sent
    ThreadedSend(String m,Sender obj)
    {
        msg = m;
        sender = obj;
    }
    public void run()
    {
        synchronized(sender)
        {
            // synchronized to send object
            sender.send(msg);
        }
    }
}

// Derived class
public class Sync_Demo {
    public static void main(String[] args) {
        Sender send = new Sender();
        ThreadedSend s1 = new ThreadedSend(" Hi ", send);
        ThreadedSend s2 = new ThreadedSend(" Bye ", send);
        // start two threads of threadedSend type
        s1.start();
        s2.start();
        // wait for threads to end
        try
        {
            s1.join();
            s2.join();
        }
        catch(Exception e)
        {
            System.out.println("Interrupted");
        }
    }
}

