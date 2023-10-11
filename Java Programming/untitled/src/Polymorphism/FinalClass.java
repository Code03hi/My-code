package Polymorphism;

final class Honda
{

}
//    cannot inherit from final Polymorphism.Honda
//public class FinalClass extends Honda {
public class FinalClass  {
    void run()
    {
        System.out.println("Running safely with 100kmph");
    }

    public static void main(String[] args) {
        FinalClass obj = new FinalClass();
        obj.run();
    }
}
