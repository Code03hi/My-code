package Synchronized;
class Table1
{
    synchronized static void printTable(int n)
    {
        for (int i = 0; i <= 10 ; i++) {
            System.out.println(n*i);
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
}

class MyThread12 extends Thread
{
    public void run()
    {
        Table1.printTable(1);
    }
}

class MyThread22 extends Thread
{
    public void run()
    {
        Table1.printTable(10);
    }
}

class MyThread3 extends Thread
{
    public void run()
    {
        Table1.printTable(100);
    }
}

class MyThread4 extends Thread
{
    public void run()
    {
        Table1.printTable(1000);
    }
}
public class TestSynchronized4 {
    public static void main(String[] args) {
        MyThread12 t1 = new MyThread12();
        MyThread22 t2 = new MyThread22();
        MyThread3 t3 = new MyThread3();
        MyThread4 t4 = new MyThread4();
        t1.start();
        t2.start();
        t3.start();
        t4.start();
    }
}
