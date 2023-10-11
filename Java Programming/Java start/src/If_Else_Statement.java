import java.util.Scanner;
public class If_Else_Statement {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a,b;
        a = sc.nextInt();
        b = sc.nextInt();
        if (a<b)
        {
            System.out.println("B is Greater then A ");
        }
        else
            System.out.println("A is Greater then B");
    }
}
