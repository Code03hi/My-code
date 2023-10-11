package Synchronized;

public class Reentrant {
    public synchronized void m()
    {
        System.out.println("This is m() method");
    }
    public synchronized void n()
    {
        System.out.println("This is n() method");
    }
}
