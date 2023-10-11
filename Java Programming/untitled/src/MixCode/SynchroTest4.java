// Java Program illustrate Synchronized
// Using static synchronized

// class 1
// helper class

class PrintTest85 extends Thread
{
    // Static synchronized locks the class PrintTest
    synchronized public static void printThread(int n)
    {
        for(int i=1;i<=10;i++)
        {
            // Print message when threads are executing
            System.out.println("Thread " + n + " is working....");
            // Try block to check for exception
            try
            {
                // Making thread to sleep for 0.6 seconds
                Thread.sleep(600);
            }
            // Catch block to handle the exception
            catch(Exception ex)
            {
                // Printing message when exception occurs
                System.out.println(ex.toString());
            }
        }
        // Displaying message for better readability
        System.out.println("-------------------------");
        try
        {
            Thread.sleep(1000);
        }
        catch (Exception ex)
        {
            System.out.println(ex.toString());
        }
    }
}

//  Class 2
// Helper class extending Thread class
class Thread51 extends Thread
{
    // run() method for thread
    public void run()
    {
        // Passing the class not the object
        PrintTest85.printThread(1);
    }
}

//  Class 3
// Helper class extending Thread class
class Thread61 extends Thread
{
    // run() method for thread
    public void run()
    {
        // Passing the class not the object
        PrintTest85.printThread(2);
    }
}
public class SynchroTest4 {
    public static void main(String[] args) {
        // No shared object
        // Creating objects of class 2 and 3 that
        // are extending to thread class
        Thread51 t1 = new Thread51();
        Thread61 t2 = new Thread61();
        // starting thread with help of start() method
        t1.start();
        t2.start();
    }
}
