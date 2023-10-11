// Java Program illustrating synchronized code
// Using synchronized block

// class 1
// Helper class extending Thread Class

class PrintTest45 extends Thread
{
    public void printThread(int n)
    {
        // Making synchronized block that makes the block
        // synchronized
        synchronized(this)
        {
            // Iterating using for loop
            for (int i=0;i<=10;i++)
            {
                // Print message when these thread are
                // executing
                System.out.println("Thread " + n + " is working....");
                // Try block to check for executions
                try
                {
                    // Making thread to pause for 0.6
                    // second
                    Thread.sleep(600);
                }
                // catch block to handle executions
                catch(Exception ex)
                {
                    // Printing message when execution.s occur
                    System.out.println(ex.toString());
                }
            }
        }
        System.out.println("------------------------------");
        try
        {
            // Making thread to sleep for 1 sec
            Thread.sleep(1000);
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }
}

// Class 2
// Helper class extending Thread class
class Thread56 extends Thread
{
    PrintTest45 test;
    Thread56(PrintTest45 p)
    {
        test = p;
    }
    public void run()
    {
        test.printThread(1);
    }
}

// Class 3
// Helper class extending Thread class

class Thread57 extends Thread
{
    PrintTest45 test;
    Thread57(PrintTest45 p)
    {
        test = p;
    }
    public void run()
    {
        test.printThread(2);
    }
}

// Class 4
// Main class

public class SynchroTest3 {
    public static void main(String[] args) {
        // Creating instance for class 1 inside main()
        PrintTest45 p = new PrintTest45();
        // Creating threads and
        // passing same object
        Thread56 t1 = new Thread56(p);
        Thread57 t2 = new Thread57(p);
        // Starting these thread using start() methods
        t1.start();
        t2.start();
    }
}
