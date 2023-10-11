package RelectionTutorial;
public class Simple {
    public static void main(String[] args) throws Exception {
        try
        {
            Class c = Class.forName("Simple");
            System.out.println(c.getName());
        }
        catch (ClassNotFoundException e)
        {
            e.printStackTrace();
        }
    }
}
