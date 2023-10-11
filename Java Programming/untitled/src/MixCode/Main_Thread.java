import java.util.*;
import java.io.*;

class abc extends Thread
{
    Thread t = Thread.currentThread();
    @Override
    public void run()
    {
        t.setName("Bhagwan jha");
        System.out.println("Name of abc Thread : " + t.getName());
    }
}
public class Main_Thread extends Thread {
    public static void main(String[] args) {
        // Getting reference to Main thread
        Thread t = Thread.currentThread();
        // Getting name to Main thread
        System.out.println("Current Thread : " + t.getName());
        // Changing the name of main thread
        t.setName("Geeks");
        System.out.println("After name change : " + t.getName());
        // Getting priority of main thread
        System.out.println("Main thread priority : " + t.getPriority());
        // Setting priority of main thread priority
        t.setPriority(MAX_PRIORITY);
        // Print and display the main thread priority
        System.out.println("Main thread new priority : " + t.getPriority());
        for (int i=0;i<5;i++)
        {
            System.out.println("Main thread");
        }
        Thread ct = new Thread()
        {
            // run() methods of a thread
            public void run()
            {
                for (int i=0;i<5;i++)
                {
                    System.out.println("Child thread");
                }
            }
        };
        // Getting priority of child thread
        // which will be inherited from Main Thread
        // as it is created by Main Thread
        System.out.println("Child thread priority : " + ct.getPriority());
        // Setting priority of main thread to MIN(1)
        ct.setPriority(MIN_PRIORITY);
        System.out.println("Child thread new priority " + ct.getPriority());
        // starting child thread
        ct.start();
        abc b1 = new abc();
        b1.start();
    }
}
// class 2
// helper class Main_Thread extending Thread class
// child Thread class
//class ChildThread extends Thread
//{
//    @Override public void run()
//    {
//        for (int i=0;i<5;i++)
//        {
//            // Print statement whenever child thread is called
//            System.out.println("Child thread");
//        }
//    }
//}



