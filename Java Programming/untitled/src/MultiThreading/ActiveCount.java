package ThreadSafety;

import java.lang.*;
class ThreadNew extends Thread
{
    // constructor of the class
    ThreadNew(String tName,ThreadGroup tgrp)
    {
        super(tgrp,tName);
        start();
    }
    // overriding the run method
    public void run()
    {
        for (int i = 0; i < 1000; i++) {
            try {
                Thread.sleep(5);
            }
            catch(InterruptedException e)
            {
                System.out.println("The exception has been encountered " + e);
            }
        }
    }
}

public class ActiveCount {
    public static void main(String[] args) {
        // creating the thread Group
        ThreadGroup tg = new ThreadGroup("The parent group of thread");
        ThreadNew th1 = new ThreadNew("First",tg);
        System.out.println("Starting the first");
        ThreadNew th2 = new ThreadNew("second",tg);
        System.out.println("Starting the second");
        // checking the number of active thread by invoking the ActiveCount() method
        System.out.println("The total number of active thread are : " + tg.activeCount());
    }
}
