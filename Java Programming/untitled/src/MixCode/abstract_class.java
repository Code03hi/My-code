abstract class base
{
    public base()
    {
        System.out.println("I am base class constructor");
    }
    public void sayhello()
    {
        System.out.println("Hello");
    }
    abstract public void greet();
}

class Dervied extends base
{
    @Override
    public void greet()
    {
        System.out.println("Good morning");
    }
}
class Dervied1 extends Dervied
{
//    @Override
    public void tb()
    {
        System.out.println("Good morning");
    }
}
public class abstract_class
{
    public static void main (String[] args) {
        /* code */
    }
}
