// Class 1
// Helper class
// Extending thread class
class PrintTest extends Thread
{
    // Non synchronized code
    // methods 1
    public void printThread(int n)
    {
        for (int i=1;i<=10;i++)
        {
            System.out.println("Thread " + n + " is working....");
            // try block to check for exception
            try
            {
                // Pause the execution of current thread
                // for 0.600-second using sleep() methods
                Thread.sleep(600);
            }
            catch(Exception ex)
            {
                System.out.println(ex.toString());
            }
        }
        // Display message for better readability
        System.out.println("----------------------------");
        try
        {
            // Pause the execution of current thread
            // for 0.1000 millisecond or 1 sec using sleep
            // methods
            Thread.sleep(1000);
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }
}

// Class 2
// Helper class extending Thread Class
class Thread12 extends Thread
{
    // Declaring variable of type Class1
    PrintTest test;
    // constructor for class1
    Thread12(PrintTest p)
    {
        test = p;
    }
    // run() methods of this class for
    // entry point for thread1
    public void run()
    {
        // Calling methods 1 as in above class
        test.printThread(1);
    }
}

// Class 3
// Helper class extending Thread Class
class Thread21 extends Thread
{
    // Declaring variable of type Class1
    PrintTest test ;
    // Constructor for class2
    Thread21(PrintTest p)
    {
        test = p;
    }
    // run() method of this class for
    // entry point for thread2
    public void run()
    {
        test.printThread(2);
    }
}


// Class 4
// Main class
public class SynchroTest {
    public static void main(String[] args) {
        // Creating object of class 1 inside main() method
        PrintTest p = new PrintTest();
        // Passing the same object of class printTest to
        // both thread
        Thread12 t1 = new Thread12(p);
        Thread21 t2 = new Thread21(p);
        // Start executing the threads
        // using start() method
        t1.start();
        t2.start();
        // This will print both the threads simultaneously
    }
}
