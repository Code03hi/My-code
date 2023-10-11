package Synchronized;
// A sender class

class Sender
{
    public void SenderMsg(String msg)
    {
        System.out.println("\nSending a Message : " + msg);
        try
        {
            Thread.sleep(800);
        }
        catch (Exception e)
        {
            System.out.println("Thread interrupted.");
        }
        System.out.println("\n" + msg + "Sent");
    }
}
// A sender class for sending a message using Threads
class SenderWThreads extends Thread
{
    private String msg;
    Sender sd;
    SenderWThreads(String m,Sender obj)
    {
        msg = m;
        sd = obj;
    }
    public void run()
    {
        // checks that only one thread sends a message at a time.
        synchronized(sd)
        {
            // synchronized the sender object
            sd.SenderMsg(msg);
        }
    }
}
public class SynchronizedMultithreading {
    public static void main(String[] args) {
        Sender sender = new Sender();
        SenderWThreads sender1 = new SenderWThreads("Hello",sender);
        SenderWThreads sender2 = new SenderWThreads("Welcome to Javatpoint website ",sender);
        // Start two threads of SenderWThread type
        sender1.start();
        sender2.start();
        // wait for thread to end
        try
        {
            sender1.join();
            sender2.join();
        }
        catch (Exception e)
        {
            System.out.println("Interrupted");
        }
    }
}

