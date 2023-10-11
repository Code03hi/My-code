package Synchronized;

public class InterruptedThread3 extends Thread{
    public void run()
    {
        for (int i = 0; i <= 5 ; i++) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        InterruptedThread3 t1 = new InterruptedThread3();
        t1.start();
        t1.interrupt();
    }
}
