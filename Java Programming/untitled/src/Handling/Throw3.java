package Handling;

public class Throw3 {
    // defining a method
    void method()
    {

    }
    public static void checkNum(int num)
    {
        if (num<1)
        {
            throw new ArithmeticException("\nNumber is negative, cannot calculate square");
        }
        else
        {
            System.out.println("Square of " + num + " is" + (num*num));
        }
    }
    // main method
    public static void main(String[] args) {
        Throw3 obj = new Throw3();
        checkNum(-3);
        System.out.println("Rest of the code...");
    }
}
