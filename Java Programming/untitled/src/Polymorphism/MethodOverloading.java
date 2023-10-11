package Polymorphism;

//If a class has multiple methods having same name but different in parameters, it is known as Method Overloading.
class Adder
{
    static int add(int a,int b)
    {
        return a+b;
    }
    static int add(int a,int b,int c)
    {
        return a+b+c;
    }
}
public class MethodOverloading {
    public static void main(String[] args) {
        System.out.println(Adder.add(11,11));
        System.out.println(Adder.add(11,11,11));
    }
}
