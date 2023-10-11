package ThreadSafety;
import java.util.*;

class RunnableInterface1 implements Runnable
{
    public void run()
    {
        System.out.println("I am Runnable Interface");
    }
}

public class RunnableInterface {
    public static void main(String[] args) {
        Runnable obj1 = new RunnableInterface1();
        Thread t = new Thread(obj1);
        t.start();
    }
}
