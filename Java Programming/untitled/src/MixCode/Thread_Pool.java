// java program to illustrate
// ThreadPool

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

// Task class to be executed (Step 1)
class Task implements Runnable
{
    private String name;
    public Task(String s)
    {
        name = s;
    }
    // private task name and sleeps for 1s
    // This whole process is repeated 5 times
    public void run()
    {
        try
        {
            for (int i=0;i<=5;i++)
            {
                if(i==0)
                {
                    Date d = new Date();
                    SimpleDateFormat ft = new SimpleDateFormat("hh:mm::ss");
                    System.out.println("Initialization Time for " + " task name - " + name + " = " + ft.format(d));
                    // print the initialization time for every task
                }
                else
                {
                    Date d = new Date();
                    SimpleDateFormat ft =  new SimpleDateFormat("hh:mm:ss");
                    System.out.println("Executing Time for task name - " + name + " = " + ft.format(d));
                    // print the execution time for every task
                }
                Thread.sleep(2000);
            }
            System.out.println(name + " complete");
        }
        catch(InterruptedException e)
        {
            e.printStackTrace();
        }
    }
}

public class Thread_Pool {
    // Maximum number of threads in thread pool
    static final int MAX_T = 3;
    public static void main(String[] args) {
        // Create five tasks
        Runnable r5 =  new Task("Task 5");
        Runnable r3 =  new Task("Task 3");
        Runnable r4 =  new Task("Task 4");
        Runnable r1 =  new Task("Task 1");
        Runnable r2 =  new Task("Task 2");
        // create a thread pool with MAX_T no. of
        // thread as the fixed pool size(step 2)
        ExecutorService pool = Executors.newFixedThreadPool(MAX_T);
        // passes the task objects to be pool to executed (step 3)
        pool.execute(r1);
        pool.execute(r2);
        pool.execute(r3);
        pool.execute(r4);
        pool.execute(r5);
        // pool shutdown (step 4)
        pool.shutdown();
    }
}


