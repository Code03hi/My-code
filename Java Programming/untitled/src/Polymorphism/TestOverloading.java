package Polymorphism;
//        Can we overload java main() method?
//        Yes, by method overloading. You can have any number of main methods in a class by method overloading.
//        But JVM calls main() method which receives string array as arguments only. Let's see the simple example:
public class TestOverloading {
    public static void main(String[] args) {
        System.out.println("Main with string[]");
    }
    public static void main(String args) {
        System.out.println("Main with string");
    }
    public static void main() {
        System.out.println("Main without args");
    }
}
