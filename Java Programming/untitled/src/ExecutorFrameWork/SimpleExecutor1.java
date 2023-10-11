package ExecutorFrameWork;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

// creating simpleExecutor class
public class SimpleExecutor1 {
    // main() method start
    public static void main(String[] args) {
        // creating an object of ExecutorService with fixed thread pool 5
        ExecutorService executorService = Executors.newFixedThreadPool(5);
        for (int i = 0; i < 5; i++) {
            // creating instance of the task1 class and pass a value to its constructor
            Runnable task = new Task1("" + i);
            // executing task using execute() method of the executor
            executorService.execute(task);
        }
        // closing executor
        executorService.shutdown();
        while (!executorService.isTerminated())
        {
        }
        System.out.println("Finished all threads");
    }
}

