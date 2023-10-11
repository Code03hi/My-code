// java Program to illustrate priorities in multithreading
// via help of getPriority() ans setPriority() methods

// importing required classes

import java.lang.*;

//class ThreadDemo extends Thread


public class Priority_Geek extends Thread
{
    // Methods 1
    // run() methods for the thread that is called
    // as soon as start() is invoked for thread in main()
    public void run()
    {
        System.out.println("Inside run method");
    }

    // Main driver method
    public static void main(String[] args) {
        // Creating random threads
        // with the help of above class
        Priority_Geek t1 = new Priority_Geek();
        Priority_Geek t2 = new Priority_Geek();
        Priority_Geek t3 = new Priority_Geek();

        // Thread 1
        // Display the priority of above thread
        // using getPriority() method
        System.out.println("t1 thread priority : " + t1.getPriority());
        // Thread 2
        // Display the priority of above thread
        System.out.println("t2 thread priority : " + t2.getPriority());
        // Thread 3
        System.out.println("t3 thread priority : " + t3.getPriority());

        // setting priorities of above threads by
        // passing integer arguments
        t1.setPriority(2);
        t2.setPriority(5);
        t3.setPriority(8);
        // t3.setPriority(21); will throw
        // illegalArgumentException
        // 2
        System.out.println("t1 thread priority : " + t1.getPriority());
        // 5
        System.out.println("t2 thread priority : " + t2.getPriority());
        // 8
        System.out.println("t3 thread priority : " + t3.getPriority());
        // Main thread
        // display the name of
        // currently executing thread
        Thread.currentThread().setName("Bhagwan jha ");
        System.out.println("Currently Executing Thread : " + Thread.currentThread().getName());
        System.out.println("Currently Executing Thread : " + Thread.currentThread().getPriority());
        // Main thread priority is set to 10
        Thread.currentThread().setPriority(10);
        System.out.println("Main thread priority : " + Thread.currentThread().getPriority());
    }
}
