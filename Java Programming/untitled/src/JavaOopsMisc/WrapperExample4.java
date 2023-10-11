package JavaOopsMisc;

class Java {
    private int i;
    Java()
    {

    }
    Java(int i)
    {
        this.i = i;
    }
    public int getValue()
    {
        return i;
    }
    public void setValue(int i)
    {
        this.i = i;
    }
    @Override
    public String toString()
    {
        return Integer.toString(i);
    }
}

public class WrapperExample4
{
    public static void main(String[] args) {
        Java j = new Java(10);
        System.out.println(j);
    }
}

