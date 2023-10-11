import java.util.Scanner;
class Detail
{
    public static int id;
    public static String Name;
    public void set()
    {
        Scanner sc =  new Scanner(System.in);
        System.out.print("Enter ID : ");
        id = sc.nextInt();
        System.out.print("Enter Name : ");
        Name = sc.next();
    }
    public static void show()
    {
        System.out.println("ID : " + id);
        System.out.println("Name : " + Name);
    }
}

class member extends Detail
{
    public static void prt1()
        {
        System.out.println("ID : " + id);
        System.out.println("Name : " + Name);
        }
}
public class Inheritance {
    public static void main(String[] args) {
        Detail e1 ;
        e1 = new Detail();
        e1.set();
        member m1 = new member();
        m1.show();
    }
}
