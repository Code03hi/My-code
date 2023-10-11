//Java program Demonstrating Methods of thread class

//class 1
//helper class implementing Runnable interface
class helper implements Runnable
{
    public void run()
    {
//        Try block to check for exception
        try
        {
//            print statement
            System.out.println("Thread2 going to sleep for 5000");
//            making thread sleep for 0.5 seconds
            Thread.sleep(5000);
        }
        catch (InterruptedException e)
        {
//            Print statement
            System.out.println("Thread2 interrupted");
        }
    }
}
//class 2
//helper class extending Runnable interface
public class Test implements Runnable {
    public void run()
    {
        // Thread run() method
    }

    public static void main(String[] args) {
//        Making object of class 1 and 2 in main() methods

    }
}
