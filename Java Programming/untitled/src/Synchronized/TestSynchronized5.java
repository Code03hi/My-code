package Synchronized;

class Table2
{
    synchronized static void printTable(int n)
    {
        for (int i = 0; i <= 10 ; i++) {
            System.out.println(n*i);
        }
        try
        {
            Thread.sleep(400);
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}
public class TestSynchronized5 {
    public static void main(String[] args) {
        Thread t1 = new Thread()
        {
            public void run()
            {
                Table2.printTable(1);
            }
        };
        Thread t2 = new Thread()
        {
            public void run()
            {
                Table2.printTable(10);
            }
        };
        Thread t3 = new Thread()
        {
            public void run()
            {
                Table2.printTable(100);
            }
        };
        Thread t4 = new Thread()
        {
            public void run()
            {
                Table2.printTable(1000);
            }
        };
        t1.start();
        t2.start();
        t3.start();
        t4.start();
    }
}
