import java.util.Scanner;
class square
{
    Scanner sc = new Scanner(System.in);
    int side;
    int perimeter;
    int area;
    public void setValue()
    {
        System.out.print("Enter Side : ");
        side = sc.nextInt();
    }
    public void Calculate()
    {
        perimeter = 4*side;
        area = side*side;
    }
    public void Show()
    {
        System.out.println("Side : " + side);
        System.out.println("Perimeter : " + perimeter);
        System.out.println("Area : " + area);
    }
}

public class practice_OOP1 {
    public static void main(String[] args) {
        square s = new square();
        s.setValue();
        s.Calculate();
        s.Show();
    }
}
