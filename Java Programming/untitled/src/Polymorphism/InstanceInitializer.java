package Polymorphism;

class A
{
    A()
    {
        System.out.println("Parent class constructor invoked");
    }
}

public class InstanceInitializer extends A{
    InstanceInitializer()
    {
        System.out.println("Child class constructor invoked");
    }
    {
        System.out.println("Instance initializer block is invoked");
    }
    public static void main(String[] args) {
        InstanceInitializer b = new InstanceInitializer();
    }
}
