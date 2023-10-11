// Java Program Illustrating lock the object for
// the shared resource giving consistent output
// Class 1
// Helper class extending Thread class
class PrintTest1 extends Thread
{
    // Synchronized code
    // Synchronized method will lock the object and
    // releases when thread is terminated or complete its
    // execution.
    synchronized public void printThread(int n)
    {
        for(int i=0;i<=10;i++)
        {
            System.out.println("Thread " + n + " is working....");
            try
            {
                // pause the execution of current thread
                // for 600 millisecond
                Thread.sleep(600);
            }
            catch (Exception ex)
            {
                System.out.println(ex.toString());
            }
        }
        System.out.println("------------------------------");
        try {
            // Pause the execution of current thread for
            // 1000 millisecond
            Thread.sleep(1000);
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }
}

class Thread31 extends Thread
{
    PrintTest1 test;
    Thread31(PrintTest1 p)
    {
        test = p ;
    }
    public void run() // entry point for thread1
    {
        test.printThread(1);
    }
}

// Creating thread2 extending Thread class
class Thread22 extends Thread
{
    PrintTest1 test;
    Thread22(PrintTest1 p)
    {
        test = p;
    }
    public void run()
    {
        test.printThread(2);
    }
}
public class SynchroTest1 {
    public static void main(String[] args) {
        PrintTest1 p =  new PrintTest1();
        // Passing the same object of class PrintThread to
        // both threads
        Thread31 t1 =  new Thread31(p);
        Thread22 t2 =  new Thread22(p);
        // start function will execute the threads
        t1.start();
        t2.start();
    }
}
