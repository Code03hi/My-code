package ThreadSafety;

class Test extends Thread{
    public void run()
    {
        System.out.println("Shut down hook task completed....");
    }
}

public class ShutDownHook {
    public static void main(String[] args) {
        Runtime r = Runtime.getRuntime();
        r.addShutdownHook(new Test());
        System.out.println("Now main sleeping.... press ctrl+c to exit");
        try
        {
            Thread.sleep(15000);
        }
        catch(Exception e)
        {

        }
    }
}
