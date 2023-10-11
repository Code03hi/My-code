package Handling;
//If we divide any number by zero, there occurs an ArithmeticException.
public class ArithmeticExceptionExample {
    public static void main(String args[]){
        try{
            //code that may raise exception
            int data=100/0;
        }catch(ArithmeticException e){System.out.println(e);}
        //rest code of the program
        System.out.println("rest of the code...");
    }
}
