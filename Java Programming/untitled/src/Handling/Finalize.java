package Handling;

public class Finalize {
    public static void main(String[] args) {
        Finalize obj = new Finalize();
        // printing the hashcode
        System.out.println("HashCode is : " + obj.hashCode());
        obj = null;
        // calling the garbage collector using gc()
        System.gc();
        System.out.println("End of the garbage collection");
    }
    // defining the finalized method
    protected void finalize()
    {
        System.out.println("Called the finalize() method");
    }
}
