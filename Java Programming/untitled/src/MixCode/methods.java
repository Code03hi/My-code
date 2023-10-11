public class methods {
    public static void main(String[] args) {
        int a=5,b=6;
        int sum = logic(a,b);
        System.out.println("Sum of Two Numbers : " + sum);
    }
    static int logic(int x,int y)
    {
        int z;
        if(x>y)
        {
            z = x+ y;
        }
        else
            z = (x+y)*5;
        return z;
    }
}

