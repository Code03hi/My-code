public class Dead_ock {
    // Main driver method
    public static void main(String[] args) {
        // Try block to check for exception
        try
        {
            System.out.println("Entering into deadlock ");
            // Joining the current thread
            Thread.currentThread().join();
            // This statement will never execute
            System.out.println("This statement will never execute");
        }
        // Catch block to handle the exception
        catch(InterruptedException e)
        {
            // Display the exception along with line number
            // Using printStackTree() method
            e.printStackTrace();
        }
    }
}
