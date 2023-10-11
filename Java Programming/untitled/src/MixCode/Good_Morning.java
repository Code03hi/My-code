class PracticeQ1 extends Thread
{
    public Thread CurrentThread;

    public PracticeQ1(String Quote)
    {
        super(Quote);
    }
    public void run()
    {
        try {
            Thread.sleep(2000);
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
//        while(true)
//        {
//            System.out.println(this.getName());
//        }
    }
}
public class Good_Morning {
    public static void main(String[] args) {
        PracticeQ1 t1 = new PracticeQ1("Good Morning");
        PracticeQ1 t2 = new PracticeQ1("Welcome");
//        t1.setPriority(Thread.MAX_PRIORITY);
//        t1.setPriority(9);
//        t2.setPriority(6);
        System.out.println(t1.getPriority());
//        System.out.println(t2.getPriority());
        System.out.println(t1.getState());
//        t1.getPriority();
        t1.start(); 
        System.out.println(t1.getState());
        try
        {
            Thread.sleep(1000);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        System.out.println(t1.getState());
        t2.start();
        try
        {
            t2.join();
        }
        catch(InterruptedException e)
        {
            Thread.currentThread();
            e.printStackTrace();
        }
        System.out.println(t1.getState());
        System.out.println(Thread.currentThread().getState());
//        System.out.println(t1.getState());
    }
}
