// Java program to demonstrate that a child thread
// Getting Same Priority as parent thread

// Importing all classes from java.lang package
import java.lang.*;

// Main class
// ThreadDemo
// Extending Thread class
public class GFG extends Thread{
    // Method 1
    // run() methods for the thread that is
    // invoked as threads are started
    public void run()
    {
        // Print statement
        System.out.println("Inside run method");
    }
    // Method 2
    // Main driver method
    public static void main(String[] args) {
        Thread.currentThread().setPriority(6);
        // Current thread is accessed
        // using currentThread() method
        // Print and display main thread priority
        // using getPriority() method of thread class
        System.out.println("Main thread priority : " + Thread.currentThread().getPriority());
        // Creating a thread by creating object inside
        // main()
        GFG t1 =  new GFG();
        // t1 thread is child of main thread
        // so t1 thread will also have priority 6
        // print and display priority of current thread
        System.out.println("t1 thread priority : " + t1.getPriority());
    }
}
