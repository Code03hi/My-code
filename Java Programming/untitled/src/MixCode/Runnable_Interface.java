class MyRunnable implements Runnable
{
    public void run()
    {
        while(true)
            {
                System.out.println("I am FIRST THREAD ");
            }
    }
}

class MyRunnable1 implements Runnable
{
    public void run()
    {
        while(true)
        {
            System.out.println("I am SECOND THREAD  ");
        }
    }
}
public class Runnable_Interface {
    public static void main(String[] args) {
        MyRunnable Bullet = new MyRunnable();
        Thread Gun = new Thread(Bullet);
        MyRunnable1 Bullet1 =  new MyRunnable1();
        Thread Gun1 = new Thread(Bullet1);
        Gun.start();
        Gun1.start();
    }
}
