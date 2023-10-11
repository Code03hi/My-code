class Myth extends Thread
{
    public  Myth(String name)
    {
        super(name);
    }
}
public class Constructor_Thread {
    public static void main(String[] args) {
        Myth th1 = new Myth("Bhagwan jha");
        Myth th2 = new Myth("Drishti Sharma");
        th1.start();
        th2.start();
        System.out.println("Name : " + th1.getName());
        System.out.println("Name : " + th2.getName());
        System.out.println("ID : " + th1.threadId());
        System.out.println("ID : " + th2.threadId());

    }
}
