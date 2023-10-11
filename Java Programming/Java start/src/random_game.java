import java.util.*;
class Guess
{
    public int Num;
    Random rn = new Random();
    Scanner sc = new Scanner(System.in);
    public int Number;
    Guess()
    {
        Num = rn.nextInt(10);
    }
    public void TakeUserInput()
    {
        System.out.print("Enter you number : ");
        Number = sc.nextInt();
    }
    public boolean IsCorrectNumber() {
        if (Num == Number) {
            System.out.println("You won the game");
            return true;
        }
        else if (Num < Number)
        {
            System.out.println("Number is too high");
            return false;
        }
        else
        {
            System.out.println("Number is too low");
            return false;
        }
    }
}
    public class random_game
    {
        public static void main(String[] args)
        {
            Guess obj1 = new Guess();
            boolean boo =  false;
            while(!boo)
            {
                obj1.TakeUserInput();
                boo = obj1.IsCorrectNumber();
                System.out.println(boo);
            }
        }
   }


