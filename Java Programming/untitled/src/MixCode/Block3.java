// Example that shows multiple threads
// can execute the same method but in
// synchronized way.

class Line1
{
    // if multiple thread(trains) trying to access
    // this synchronized method on the same object
    // but only one thread will be able
    // to execute it at a time.
    synchronized public void getLine()
    {
        for (int i=0;i<3;i++)
        {
            System.out.println(i);
                System.out.println(i);
                try
                {
                    Thread.sleep(400);
                }
                catch(Exception e)
                {
                    System.out.println(e);
                }
        }
    }
}
 class Train1 extends Thread
 {
     // Reference variable of type line
     Line1 line;
     Train1(Line1 line)
     {
         this.line = line;
     }
     @Override
     public void run()
     {
         line.getLine();
     }
 }
public class Block3 {
    public static void main(String[] args) {
        Line1 obj = new Line1();
        // we are creating two threads which share
        // same Object
        Train1 train1 = new Train1(obj);
        Train1 train2 = new Train1(obj);
        // both threads start executing
        train1.start();
        train2.start();
    }
}
