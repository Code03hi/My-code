package Polymorphism;

class Bike
{
    final void run()
    {
        System.out.println("running");
    }
}

public class FinalMethod extends Bike{
//    run() in Polymorphism.FinalMethod cannot override run() in Polymorphism.Bike
//    overridden method is final
//    void run()
//    {
//        System.out.println("Running safely with 100kmph");
//    }

    public static void main(String[] args) {
        FinalMethod obj = new FinalMethod();
        obj.run();
    }
}

