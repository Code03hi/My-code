class MyThread extends Thread{
    public void run()
    {
        while(true)
        {
            System.out.println("My First Thread class is running.");
            System.out.println("I am happy.");
        }
    }
}

class MyThread1 {

    public void run()
    {
        while(true)
        {
            System.out.println("My Second Thread class is running.");
            System.out.println("I am Sad .");
        }
    }
}
public class Multi {
    public static void main(String[] args) {
        MyThread my = new MyThread();
        MyThread1 my1 = new MyThread1();
        my.start();
//        my1.start();
    }
}
