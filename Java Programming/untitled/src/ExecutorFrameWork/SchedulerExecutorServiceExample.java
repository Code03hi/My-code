package ExecutorFrameWork;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
public class ScheduledExecutorRunnable {
    public static void main(String[] args) {
        ScheduledExecutorService ses = Executors.newScheduledThreadPool(1);
        Runnable task2 = () -> System.out.println("Running task2");
        task2
    }
}
