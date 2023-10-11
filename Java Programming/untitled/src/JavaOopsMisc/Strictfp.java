package JavaOopsMisc;

public class Strictfp {
    // Method 1
    // calculating sum using strictfp modifier
    public strictfp double sum()
    {
        double num1 = 10e+10;
        double num2 = 6e+10;
        // Returning the sum
        return (num1 + num2);
    }
    // method 2
    // main driver method
    public static void main(String[] args) {
        // creating object of class in main() method
        Strictfp t = new Strictfp();
        // Here we have error of putting strictfp and
        // error is not found public static void main method
        System.out.println(t.sum());
    }
}
