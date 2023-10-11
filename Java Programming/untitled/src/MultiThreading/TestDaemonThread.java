package ThreadSafety;

public class TestDaemonThread extends Thread{
    public void run()
    {
        System.out.println("User thread work");
    }

    public static void main(String[] args) {
        TestDaemonThread t1 = new TestDaemonThread();
        TestDaemonThread t2 = new TestDaemonThread();
        TestDaemonThread t3 = new TestDaemonThread();
        t1.setDaemon(true); // now t1 is daemon thread
        t1.start(); // starting t1 is daemon thread
        t2.start();
        t3.start();
    }
}
