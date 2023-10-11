// Example illustrate multiple threads are executing
// on the same object at same time without synchronization

import java.util.*;

class Line
{
    // if multiple thread(trains) will try to
    // access this unsynchronized method,
    // they all will get it. so there is chance
    // that Object's state will be corrupted
    public void getLine()
    {
        for (int i=0;i<3;i++)
        {
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

class Train extends Thread
{
    // reference to line's object.
    Line line;
    Train(Line line)
    {
        this.line = line;
    }
    @Override
    public void run()
    {
        line.getLine();
    }
}

public class Block2 {
    // Object of line class that is shared
    // among the threads.
    Line obj = new Line();
    // Creating the threads that are
    // sharing the same object.
    Train train1 = new Train(obj);
    Train train2 = new Train(obj);
    // Threads start their execution
//       train1.start();
//       train2.start();
}
