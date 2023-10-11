class MyThr1 extends Thread
{
    public MyThr1(String name)
    {
        super(name);
    }
    public void run()
    {
        int i=3;
        System.out.println("Hello My dear Friend's " + this.getName());
        while(true)
        {
            System.out.println("Hello My dear Friend's " + this.getName());
        }
    }
}

public class Thread_Priority {
    public static void main(String[] args) {
//        Ready Queue T1 T2 T3 T4 T5
        MyThr1 th = new MyThr1("Bhagwan jha ");
        MyThr1 th1 = new MyThr1("It is most important Activity And we give priority to this thread");
        MyThr1 th2 = new MyThr1("Best friend's");
        MyThr1 th3 = new MyThr1("Best Friend Forever");
        MyThr1 th4 = new MyThr1("Childhood Friend's");
        th1.setPriority(Thread.MAX_PRIORITY);
        th2.setPriority(Thread.MIN_PRIORITY);
        th.start();
        th1.start();
        th2.start();
        th3.start();
        th4.start();
    }
}
