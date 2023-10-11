package Synchronized;

public class InterruptedThread extends Thread{
    public void run()
    {
        try
        {
            Thread.sleep(1000);
            System.out.println("Task");
        }
        catch (InterruptedException e)
        {
            throw new RuntimeException("Thread interrupted...." + e);
        }
    }

    public static void main(String[] args) {
        InterruptedThread  t1 = new InterruptedThread();
        t1.start();
        try
        {
            t1.interrupt();
        }
        catch (Exception e)
        {
            System.out.println("Exception handled " + e);
        }
    }
}
