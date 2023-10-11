package JavaOopsMisc;

public class JavaMath {
    public static void main(String[] args) {
        double x = 28;
        double y = 4;
        // return the maximum of two numbers
        System.out.println("Maximum number of x and y is : " + Math.max(x,y));
        // return the square root of y
        System.out.println("Square root of y is : " + Math.sqrt(y));
        // return 28 power of 4 i.e. 28*28*28*28
        System.out.println("Power of x and y is : " + Math.pow(x,y));
        // return the logarithm of given value
        System.out.println("Logarithm of x is : " + Math.log(x));
        System.out.println("Logarithm of x is : " + Math.log(y));
        // return the log of x+1
        System.out.println("log1p of x is : " + Math.log1p(x));
        // return (a power of 2)-1
        System.out.println("expm1 of a is : " + Math.expm1(x));
    }
}
