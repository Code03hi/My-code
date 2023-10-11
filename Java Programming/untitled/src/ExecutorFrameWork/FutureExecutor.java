package ExecutorFrameWork;
// Java Program demonstrating Introduction to Java Executor
// FrameWork

import java.util.concurrent.*;
// class 1
// Helper class implementing runnable interface Callable
class Task3 implements Callable<String>
{
    // Member variable of this class
    private String message;
    // constructor of this class
    public Task3(String message)
    {
        this.message = message;
    }
    // method of this class
    public String call() throws Exception
    {
        return "Hilli " + message + "!";
    }
}

public class FutureExecutor {
    // Main driver method
    public static void main(String[] args) {
        // Creating an object of above class
        // in the main method
        Task3 task = new Task3("GeeksForGeeks");
        // Creating object of ExecutorService class and
        // Future object class
        ExecutorService executorService = Executors.newFixedThreadPool(4);
        Future<String> result = executorService.submit(task);
        // try block to check for exception
        try {
            System.out.println(result.get());
        }
        catch (InterruptedException | ExecutionException e)
        {
            // Display message only
            System.out.println("Error occurred while executing the submitted task");
            // Print the line number where exception occurred
            e.printStackTrace();
        }
        // cleaning resource and shutting down JVM by
        // saving JVM state using shutdown() method
        executorService.shutdown();
    }
}
