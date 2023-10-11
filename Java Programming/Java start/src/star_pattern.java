import java.util.Scanner;

public class star_pattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        System.out.print("Enter No of Rows : ");
//        int no = sc.nextInt();
//        for (int i=0;i<no;i++)
//        {
//            for (int j=no;j>i;j--)
//            {
//                System.out.print("* ");
//            }
//            System.out.println("\n");
//        }
//        int sum= 0,i=10;
//        while(i!=0)
//        {
//            if (i%2==0)
//            {
//                sum = sum + i;
//            }
//            i--;
//        }
//        System.out.println("Sum of Even Number : " + sum);
//        System.out.print("Enter Number Which you want to : ");
//        int no = sc.nextInt();
//        int i = 10;
//        while(i!=0 && i>0)
//        {
//            System.out.println(no + "*" + i + "=" + no*i);
//            i--;
//        }
//    }
        System.out.print("Enter Number for Factorial : ");
        int no = sc.nextInt();
        int facto = 1, i;
        for (i = 1; i <= no; i++) {
            if (no == 0) {
                facto = 1;
            } else {
                facto = facto * i;
            }
        }
        System.out.print("Factorial of " + no + " : " + facto);
    }
}