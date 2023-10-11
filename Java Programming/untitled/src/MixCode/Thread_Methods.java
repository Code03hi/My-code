class MyThr2 extends Thread
{
    public MyThr2(String name)
    {
        super(name);
    }
    public void run()
    {
        int i =0;
        while(i<9)
        {
            System.out.println("Hello My dear Friend's " + this.getName());
            i++;
        }
    }
}

class MyThr3 extends Thread
{
    public void run()
    {
        while(true)
        {
            System.out.println("Hello My dear Friend's First" );
        }
    }
}
public class Thread_Methods {
    public static void main(String[] args) {
        MyThr2 t2 = new MyThr2("Bhagwan jha");
        MyThr2 t3 = new MyThr2("Rahul");
        t2.start();
//        try
//        {
//            t2.join();
//        }
//        catch(Exception e)
//        {
//            System.out.println(e);
//        }
        try
        {
            Thread.sleep(5000);
        }
        catch(InterruptedException e)
        {
            e.printStackTrace();
        }
        t3.start();
    }
}
