//import java.util.Scanner;
//import java.util.*;

class employee
{
    int age = 18;
    public String Name = "Bhagwan jha";
    private int salary = 120000;
    protected String Location = "Bangalore";
}
public class Package {
    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        java.util.Scanner sc = new java.util.Scanner(System.in);
//        int a = sc.nextInt();
//        System.out.println("Value of a : " + a);
        employee obj1 = new employee();
        System.out.println("Name : " + obj1.Name);
        System.out.println("Age : " + obj1.age);
        System.out.println("Location : " + obj1.Location);
    }
}
