class Phone
{
    int a;
    public void greet()
    {
        System.out.println("Good Morning ");
    }
    public void name()
    {
        System.out.println("My name is bhagwan jha");
    }
}
class SmartPhone extends Phone
{
    int a;
    public void namaste()
    {
        System.out.println("Namaste");
    }
    public void name()
    {
        System.out.println("My name is Nora Fatehi");
    }
}
public class Dynamic_Dispatch {
    public static void main(String[] args) {
        Phone obj1 = new SmartPhone();
        obj1.name();
//        obj1.namaste();
        obj1.greet();
    }
}
