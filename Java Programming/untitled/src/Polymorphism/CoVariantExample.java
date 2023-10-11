package Polymorphism;
//The covariant return type specifies that the return type may vary in the same direction as the subclass.

class a1
{
    a1 foo()
    {
        return this;
    }
    void print()
    {
        System.out.println("Inside the class a1");
    }
}

class a2 extends a1
{
    @Override
    a1 foo()
    {
        return this;
    }
    void print()
    {
        System.out.println("Inside the class a2");
    }
}

class a3 extends a2
{
    @Override
    a1 foo()
    {
        return this;
    }
    @Override
    void print()
    {
        System.out.println("Inside the class a3");
    }
}
public class CoVariantExample {
    public static void main(String[] args) {
        a1 a = new a1();
        // this is ok
        a.foo().print();
        a2 b = new a2();
        // we need to do the type casting to make it
        // clearer to reader about the kind of object created
        ((a2)b.foo()).print();
        a3 c = new a3();
        // doing the type casting
        ((a3)c.foo()).print();
    }
}
