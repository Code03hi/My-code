// Java program to illustrate need
// of synchronized

import java.util.*;

class MultiThread
{
    private int i = 0;
    public void increment()
    {
        i++;
    }
    public int getValue()
    {
        return i;
    }
}
public class Block1 {
    public static void main(String[] args) {
        MultiThread t = new MultiThread();
        t.increment();
        System.out.println(t.getValue());
    }
}

