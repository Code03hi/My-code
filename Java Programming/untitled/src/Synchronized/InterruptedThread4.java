package Synchronized;

public class InterruptedThread4 extends Thread{
    public void run()
    {
        for (int i = 0; i <= 2 ; i++) {
            if(Thread.interrupted())
            {
                System.out.println("Code for interrupted thread");
            }
            else
            {
                System.out.println("Code for normal thread");
            }
        }// end of the loop
    }

    public static void main(String[] args) {
        InterruptedThread4 t1 = new Synchronized.InterruptedThread4();
        InterruptedThread4 t2 = new Synchronized.InterruptedThread4();
        t1.start();
        t1.interrupt();
        t2.start();
    }
}
