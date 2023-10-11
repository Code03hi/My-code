package ThreadSafety;
// java program that print the odd and even numbers using two thread
// the time complexity of the program is O(N), where N is the number up to which we
// are displaying the numbers

class OddEvenExample
{
    // starting the counter
    int contr = 1;
    static int NUM;
    // Method for printing the odd numbers
    public void displayOddNumber()
    {
        // note that synchronized block are necessary for the code for getting the desired
        // output. if we remove the synchronized blocks, we will get an exception
        synchronized(this)
        {
            // printing the number till NUM
            while(contr<NUM)
            {
                // if the contr is even then display
                while(contr%2==0)
                {
                    // handling the exception handle
                    try
                    {
                        wait();
                    }
                    catch (InterruptedException ex)
                    {
                        ex.printStackTrace();
                    }
                }
                // printing the number
                System.out.println(contr + "");
                // Increment the contr
                contr = contr + 1;
                // notifying the thread which is waiting for this lock
                notify();
            }
        }
    }
    // Method for printing the even numbers
    public void displayEvenNumber()
    {
        synchronized(this)
        {
            // if the count is odd then display
            while (contr%2==1)
            {
                // handling the exception
                try
                {
                    wait();
                }
                catch(InterruptedException ex)
                {
                    ex.printStackTrace();
                }
            }
            // Printing the number
            System.out.println(contr + " ");
            // increment the contr
            contr = contr + 1;
            // Notifying to the 2nd thread
            notify();
        }
    }

    public static void main(String[] args) {
        // the NUM is given
        NUM = 20;
        // creating an object of the class OddEvenExample
        OddEvenExample oe = new OddEvenExample();
        // creating a thread th1
        Thread th1 = new Thread(new Runnable() {
            @Override
            public void run() {
                // invoking the method displayEvenNumber() using the thread th2
                oe.displayEvenNumber();
            }
        });
        // creating a thread th2
        Thread th2 = new Thread(new Runnable() {
            @Override
            public void run() {
                // invoking the method displayOddNumber() using the thread th2
                oe.displayOddNumber();
            }
        });
        // starting both of the threads
        th1.start();
        th2.start();
    }
}

