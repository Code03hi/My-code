import java.util.Scanner;
public class Strings {
    public static void main(String[] args) {
//        String name =  new String("Bhagwan jha");
//        System.out.println(name);
//        String name = "Bhagwan jha";
//        System.out.print(name);
//        int a = 6;
//        float b = 5.666f;
//        System.out.printf("The value of A : %d and The value of B : %f \n",a,b);
//        System.out.format("The value of A : %d and The value of B : %f ",a,b);
        Scanner sc =  new Scanner( System.in);
//        System.out.print("Enter you name : ");
//        String st = sc.next();
//        System.out.println(st);
        System.out.print("Enter you name : ");
        String st = sc.nextLine();
        System.out.print("Hello " + st);
    }
}
