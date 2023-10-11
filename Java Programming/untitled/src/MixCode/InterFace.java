interface bicycle
{
    int speed = 45;
    void applyBreak(int Decrement);
    void applySpeed(int Increment);
}

interface cycle
{
    void HeroHonda();
    void Plusher();
//    void HeroHonda()
//    {
//        System.out.println("I am hero Honda Cycle");
//    }
//    void Plusher()
//    {
//        System.out.println("I am Plusher Bike");
//    }
}

class AvonCycle implements bicycle,cycle
{
//    public int speed;
    public void blowHorn()
    {
        System.out.println("Please Blow The Horn ");
    }
    public void applyBreak(int Decrement)
    {
        System.out.println("Apply Break");
//        speed = speed - Decrement;
    }
    public void applySpeed(int Increment)
    {
        System.out.println("Apply Speed");
//        speed = speed + Increment;
    }

    @Override
    public void HeroHonda() {

    }

    @Override
    public void Plusher() {

    }
}
public class InterFace {
    public static void main(String[] args) {
        AvonCycle BhagwanCycle = new AvonCycle();
        BhagwanCycle.applyBreak(5);
//        BhagwanCycle.speed;
    }
}
