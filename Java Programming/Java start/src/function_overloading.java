public class function_overloading {
    public static void main(String[] args) {
        int [] arr = {25,36,96,68,36};
        int a = 40;
        change(a);
        System.out.println("The Value of a[0] Before Function calling : " + arr[0]);
        chang1(arr);
        System.out.println("Value of a : " + a);
        System.out.println("The Value of a[0] After Function calling : " + arr[0]);
        foo();
        foo(2);
        foo(3,7);
    }

    static void foo()
    {
        System.out.println("I have no any argument ");
    }
    static void foo(int a)
    {
        System.out.println("I have one argument " + a);
    }
    static void foo(int a,int b)
    {
        System.out.println("I have two argument " + a + b);
    }
    static void change(int x)
    {
          x = 45;
    }
    static void chang1(int  [] arr)
    {
            arr[0] = 45;
    }
}
