package Polymorphism;
//The final keyword in java is used to restrict the user. The java final keyword can be used in many context.

//If you make any variable as final, you cannot change the value of final variable(It will be constant).
public class FinalVariable {
    final int speedLimit = 90; // final variable
    void run()
    {
//        speedLimit = 400; cannot assign a value to final variable speedLimit
    }

    public static void main(String[] args) {
        FinalVariable obj = new FinalVariable();
        obj.run();
    }
}
