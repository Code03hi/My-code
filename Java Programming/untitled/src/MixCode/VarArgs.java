public class VarArgs {
    static int sum(int ...arr)
    {
        int sum = 0;
        // Available as int [] arr
        for(int a : arr)
        {
            sum += a;
        }
        return sum;
    }
    public static void main(String[] args) {
        System.out.println("Welcome to VarAges ");
        System.out.println(sum());
        System.out.println("The sum of 4 and 6 : " + sum(4,6));
        System.out.println("The sum of 4 , 5  and 7 : " + sum(4,5,7));
    }
}
