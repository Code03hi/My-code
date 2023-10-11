package Polymorphism;

public class Test {
    Test getObject()
    {
        return this;
    }
    public static void main(String[] args) {
        Test t = new Test();
        System.out.println("Object Reference ID : " + t);
        System.out.println("this Reference ID : " + t.getObject());
    }
}
