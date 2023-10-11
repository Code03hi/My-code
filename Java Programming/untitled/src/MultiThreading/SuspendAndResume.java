package MultiThreading;

class Test81 extends Thread{
    String n = Thread.currentThread().getName();
    @Override
    public void run()
    {
        System.out.println(n);
    }
}

public class SuspendAndResume {
    public static void main(String[] args) {
        Test81 t1 = new MultiThreading.Test81();
        Test81 t2 = new MultiThreading.Test81();
        Test81 t3 = new MultiThreading.Test81();
        t1.setName("Bhagwan jha");
        t1.start();
        t2.setName("Megha");
        t2.start();
        t3.setName("Noor Fathehi");
        t3.start();
        t2.suspend();
        t2.resume();
    }
}
