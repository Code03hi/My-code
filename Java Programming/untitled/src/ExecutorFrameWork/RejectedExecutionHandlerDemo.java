package ExecutorFrameWork;
import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.ThreadPoolExecutor;

// creating RejectedExecutionHandleDemo class to handle rejected execution

public class RejectedExecutionHandlerDemo implements RejectedExecutionHandler{
    // defining abstract method of RejectedExecutionHandler class
    @Override
    public void rejectedExecution(Runnable runnableObject,ThreadPoolExecutor executorObject)
    {
        // printing the rejected thread
        System.out.println(runnableObject.toString() + " is rejected");
    }
}
