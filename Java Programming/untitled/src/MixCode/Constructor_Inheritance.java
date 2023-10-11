import java.util.Scanner;

class A
{
    public static int ID;
    public static String name;
    Scanner sc = new Scanner(System.in);

    A()
    {
        System.out.println("I am a base class constructor");
    }
    A(int a,int b)
    {
        System.out.println("I am a parameterize base class constructor");
    }
    public void set()
    {
        System.out.print("Enter ID : ");
        ID = sc.nextInt();
        System.out.print("Enter Name : ");
        name = sc.nextLine();
    }
    public static void show()
    {
        System.out.println("ID " + ID);
        System.out.print("Name : " + name);
    }
}
class B extends A
{
    B()
    {
        super(2,5);
        System.out.println("I am a Derived class constructor");
    }
}

public class Constructor_Inheritance {
    public static void main(String[] args) {
        A obj1 = new A();
        B obj2 = new B();
        obj1.set();
        obj1.show();
    }
}
