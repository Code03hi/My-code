package Handling;
//        In this example, we have created a method named validate() that accepts an integer as a parameter.
//        If the age is less than 18, we are throwing the ArithmeticException otherwise print a message welcome to vote.
//        The Java throw keyword is used to throw an exception explicitly.
public class Throw1 {
    // function to check if person is eligible to vote or not
    public static void validate(int age)
    {
        if (age<18)
        {
            // throws Arithmetic exception if not eligible to vote
            throw new ArithmeticException("Person is not eligible to vote");
        }
        else
        {
            System.out.println("Person is eligible to vote!!");
        }
    }
    public static void main(String[] args) {
        // calling the function
        validate(18);
        System.out.println("rest of the code....");
    }
}
