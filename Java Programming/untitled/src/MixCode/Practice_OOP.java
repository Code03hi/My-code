import java.util.Scanner;

class Employee
{
    Scanner sc = new Scanner(System.in);
    int salary;
    public String name;
    public void setData()
    {
        System.out.print("Enter Salary : " );
        salary = sc.nextInt();
        System.out.print("Enter Name : ");
        name = sc.next();
    }
    public void showData()
    {
        System.out.println("Name : " + name);
        System.out.print("Salary : " + salary);
    }
}
public class Practice_OOP {
    public static void main(String[] args) {
        Employee e1 = new Employee();
        e1.setData();
        e1.showData();
    }
}
