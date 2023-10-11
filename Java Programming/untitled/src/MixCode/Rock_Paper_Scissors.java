import java.util.Scanner;
import java.util.Random;
public class Rock_Paper_Scissors {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter Your move. Type in rock, paper, or scissor");
        String myMove = sc.nextLine();
        if(!myMove.equals("rock") && !myMove.equals("paper") && !myMove.equals("scissor"))
        {
            System.out.println("User move isn't valid ");
        }
        int rand = (int)(Math.random()*3);
        String opponentsMove = "";
        if (rand == 0)
        {
            opponentsMove = "rock";
        }
        else if (rand == 1)
        {
            opponentsMove = "paper";
        }
        else
        {
            opponentsMove = "scissor";
        }
        System.out.println("Opponents move : " + opponentsMove);
        if (myMove.equals(opponentsMove))
        {
            System.out.println("You tied!");
        }
        else if (myMove.equals("rock") && opponentsMove.equals("paper"))
        {
            System.out.println("Opponents Wins");
        }
        else if (myMove.equals("scissor") && opponentsMove.equals("rock"))
        {
            System.out.println("Opponents Wins");
        }
        else if(myMove.equals("paper") && opponentsMove.equals("rock"))
        {
            System.out.println("I win ");
        }
        else
        {
            System.out.println("I win");
        }
//        System.out.println("1 for Rock ");
//        System.out.println("2 for paper");
//        System.out.println("3 for scissor");
//        Random rn = new Random();
//        int first = rn.nextInt(10) + 1;
//        int second = rn.nextInt(10) + 1;
//        int third = rn.nextInt(10) + 1;
//        int first1 = rn.nextInt(10) + 1;
//        int second1 = rn.nextInt(10) + 1;
//        int third1 = rn.nextInt(10) + 1;
        // Random generate the opponents move
    }
}
