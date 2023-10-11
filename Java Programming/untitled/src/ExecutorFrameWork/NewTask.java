package ExecutorFrameWork;
import java.util.concurrent.ThreadPoolExecutor;

public class NewTask implements Runnable{
    private ThreadPoolExecutor exe ; // creating a private variable of type ThreadPoolExecutor
    private int delay; // creating a private of type integer for delay
    private boolean run = true; //  creating a private boolean variable to determined whether
    // using constructor to set the value to the exe and delay variable
    public NewTask(ThreadPoolExecutor exe,int delay)
    {
        this.exe = exe;
        this.delay = delay;
    }
    // creating the run() method of the Runnable interface
    @Override
    public void run()
    {
        // running task
        while (run)
        {
            System.out.println(String.format("[Monitor [%d%d] Number of active threads = %d, Number of complete task = %d, Number of task = %d, shutdown = %s, Terminate = %s", this.exe.getPoolSize(),this.exe.getCorePoolSize(),this.exe.getCompletedTaskCount(),this.exe.isShutdown(),this.exe.isTerminated()));
            try
            {
                Thread.sleep(this.delay*1000);
            }
            catch (InterruptedException e)
            {
                e.printStackTrace();
            }
        }
    }
}
