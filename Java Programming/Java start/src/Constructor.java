import java.util.Scanner;

class MyEmployee
{
    private int id;
    private String name;
    public MyEmployee()
    {
        System.out.println("I am default Constructor");
    }
    public MyEmployee(int id)
    {
        System.out.println("I contain one argument");
    }
    public MyEmployee(int id,String name)
    {
        System.out.println("I am Parameterized Constructor");
        this.id = id;
        this.name = name;
    }
    public void show()
    {
        System.out.println("ID : " + id);
        System.out.println("Name : " + name);
    }
}
public class Constructor {
    public static void main(String[] args) {
        MyEmployee e1 = new MyEmployee();
        MyEmployee e2 = new MyEmployee(1,"bhagwan jha");
        e2.show();
    }
}
