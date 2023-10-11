package ThreadSafety;

import java.lang.*;

public class ThreadPriority extends Thread{
    public void run()
    {
        // the print statement
        System.out.println("Inside the run() method");
    }
    // the main method
    public static void main(String[] args) {
        // Creating threads with the help of ThreadPriority class
        ThreadPriority th1 = new ThreadPriority();
        ThreadPriority th2 = new ThreadPriority();
        ThreadPriority th3 = new ThreadPriority();
        // we did not mention the priority of the thread.
        // Therefore, the priority of the thread is 5, the default value
        // 1st Thread
        // Displaying the priority of the thread
        // using the getPriority() method
        System.out.println("Priority of the thread th1 is : " + th1.getPriority());
        // 2nd Thread
        // Display the priority of the thread
        System.out.println("Priority of the thread th2 is : " + th2.getPriority());
        // 3rd Thread
        // Display the priority of the thread
        System.out.println("Priority of the thread th3 is : " + th3.getPriority());
        // Setting priorities of above threads by
        // passing integer arguments
        th1.setPriority(6);
        th2.setPriority(3);
        th3.setPriority(9);
        // 6
        System.out.println("Priority of the th1 is : " + th1.getPriority());
        // 3
        System.out.println("Priority of the th2 is : " + th2.getPriority());
        // 9
        System.out.println("Priority of the th3 is : " + th3.getPriority());
        // Main thread
        // displaying name of the currently executing thread
        System.out.println("Currently Executing The Thread : " + Thread.currentThread().getName());
        System.out.println("Priority of the main thread : " + Thread.currentThread().getPriority());
    }
}
