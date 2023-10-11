package ThreadSafety;
// The ThreadJoin class is the child class of the class thread

class ThreadJoin extends Thread
{
    // Overriding the run method
    public void run()
    {
        for (int i = 0; i < 2; i++) {
            try
            {
                // sleeping the thread for 300 milli seconds
                Thread.sleep(300);
                System.out.println("The current thread name is : " + Thread.currentThread().getName());
            }
            // Catch block for catching the raised exception
            catch(Exception e)
            {
                System.out.println("The exception has been caught : " + e);
            }
            System.out.println(i);
        }
    }
}
public class ThreadJoin1 {
    public static void main(String[] args) {
        // Creating 3 threads
        ThreadJoin th1 = new ThreadJoin();
        ThreadJoin th2 = new ThreadJoin();
        ThreadJoin th3 = new ThreadJoin();
        // Thread th1 starts
        th1.start();
        // starting the second thread after when
        // the first thread th1 has ended or died
        try
        {
            System.out.println("The current thread name is : " + Thread.currentThread().getName());
            // invoking the join() method
            th1.join();
        }
        // catching block for catching the raised exception
        catch(Exception e)
        {
            System.out.println("The exception has been caught " + e);
        }
        th2.start();
        // starting the thread after when the thread th2 has ended or died
        try
        {
            System.out.println("The current thread name is : " + Thread.currentThread().getName());
            th2.join();
        }
        // catch block for catching the raised exception
        catch(Exception e)
        {
            System.out.println("The exception has been caught " + e);
        }
        // Thread th3 starts
        th3.start();
    }
}
