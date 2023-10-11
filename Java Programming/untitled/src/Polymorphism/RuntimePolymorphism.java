package Polymorphism;
//        Polymorphism in Java is a concept by which we can perform a single action in different ways.
//        There are two types of polymorphism in Java: compile-time polymorphism and runtime polymorphism.
//        We can perform polymorphism in java by method overloading and method overriding.

class Bank1
{
    float getRateOfInterest()
    {
        return 0;
    }
}

class SBI1 extends Bank1
{
    float getRateOfInterest()
    {
        return 7.3f;
    }
}

class ICICI1 extends Bank1
{
    float getRateOfInterest()
    {
        return 8.4f;
    }
}
class AXIS1 extends Bank1
{
    float getRateOfInterest()
    {
        return 9.7f;
    }
}
public class RuntimePolymorphism {
    public static void main(String[] args) {
        Bank1 b ;
        b = new SBI1();
        System.out.println("SBI Rate of Interest : " + b.getRateOfInterest());
        b = new ICICI1();
        System.out.println("ICICI Rate of Interest : " + b.getRateOfInterest());
        b = new AXIS1();
        System.out.println("AXIS Rate of Interest : " + b.getRateOfInterest());
    }
}
