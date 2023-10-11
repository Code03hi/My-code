class LifeThread extends Thread {
    public LifeThread(String name)
    {
//        System.out.println("Hello " + name);
        super(name);
    }
    @Override
    public void run()
    {
        System.out.println("It's My Pleasure");
    }
}

//class LifeThread1 extends Thread {
//    @Override
//    public void run()
//    {
//        int i=0;
//        while(i<20)
//        {
//            System.out.println("Hello Drishti Sharma");
//            i++;
//        }
//    }
//}
public class Thread1 {
    public static void main(String[] args) {
        LifeThread l1 = new LifeThread("Bhagwan jha");
        LifeThread l2 = new LifeThread("Drishti Sharma");
        l1.start();
        l1.start();
        System.out.println("Thread ID : " + l1.getName());
        System.out.println("Thread ID : " + l2.getName());
    }
}
