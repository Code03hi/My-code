package ThreadSafety;

import java.util.*;

//        Java Thread sleep is used to pause the execution of the current thread. We will use Thread sleep
//        extensively in future posts, so it’s good to know how it works and is it accurate or not?

public class ThreadSleep {
    public static void main(String[] args) throws InterruptedException{
        long start = System.currentTimeMillis();
        Thread.sleep(2000);
        System.out.println("Sleep time is ms = " + (System.currentTimeMillis() - start));
    }
}
