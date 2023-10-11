package ExecutorFrameWork;

// importing class
import java.util.concurrent.Executors;
import java.util.concurrent.ExecutorService;
// creating simpleExecutor class
public class SimpleExecutor {
    // main() method start
    public static void main(String[] args) {
        // creating an object of ExecutorService with fixed thread pool 5
        ExecutorService executorService = Executors.newFixedThreadPool(5);
        for (int i = 0; i < 5; i++) {
            // creating instance if the task1 class and pass a value to its constructor
            Runnable task = new Task1("" + i);
            // executing task using execute() method of the executor
            executorService.execute(task);
        }
        // closing executor
        executorService.shutdown();
        while (!executorService.isTerminated())
        {
            System.out.println("Finished all threads");
        }
    }
}

// creating task1 class that implement the runnable interface
class Task1 implements Runnable
{
    // initialize threadNo variable
    private String threadNO ;
    // using constructor to set value to the threadNo variable
    public Task1(String no)
    {
        this.threadNO = no;
    }
    // using run() method by overriding it
    @Override
    public void run()
    {
        // printing thread information
        System.out.println(Thread.currentThread().getName() + " start execution. Thread No = " + threadNO);
        // calling processThread() method for processing thread
        processThread();
        // printing a statement to show the end of the thread
        System.out.println(Thread.currentThread().getName()+ " stop execution");
    }
    private void processThread()
    {
        try
        {
            Thread.sleep(5000);
        }
        catch (InterruptedException e)
        {
            e.printStackTrace();
        }
    }
    // overriding toString() method
    @Override
    public String toString()
    {
        return this.threadNO;
    }
}
