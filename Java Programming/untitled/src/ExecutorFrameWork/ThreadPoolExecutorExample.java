package ExecutorFrameWork;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class ThreadPoolExecutorExample {
    public static void main(String[] args) throws Exception{
        // creating an instance of the RejectedExecutionHandleExample class
        RejectedExecutionHandlerDemo rejectionHandlerObj = new RejectedExecutionHandlerDemo();
        // creating an instance of the threadPoolExecutor class
        ThreadFactory t1 = Executors.defaultThreadFactory();
        ThreadPoolExecutor exePool = new ThreadPoolExecutor(2,4,10, TimeUnit.SECONDS,new ArrayBlockingQueue<Runnable>(2),t1,rejectionHandlerObj);
        // starting the NewTask thread
        NewTask task = new NewTask(exePool,3);
        Thread th = new Thread(task);
        th.start();
        // submitting job to the pool
        for (int i = 0; i < 10;i++) {
            exePool.execute(new Task1("cmd " + i));
        }
        Thread.sleep(30000);
        // shutting down the job pool
        exePool.shutdown();
        // shutting down the th method
        Thread.sleep(5000);
        exePool.shutdown();
    }
}
