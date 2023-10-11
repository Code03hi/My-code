import java.util.Scanner;
public class Question {
    public static void main(String[] args) {
        int Mathematics,English,Social_Science,Science,Hindi;
        System.out.println("Enter Your Marks And Marks Should be less than and Equal to 100 ");
        Scanner sc = new Scanner(System.in);
        System.out.print("Mathematics : ");
        Mathematics = sc.nextInt();
        System.out.print("English : ");
        English = sc.nextInt();
        System.out.print("Social Science : ");
        Social_Science = sc.nextInt();
        System.out.print("Science : ");
        Science = sc.nextInt();
        System.out.print("Hindi : ");
        Hindi = sc.nextInt();
        int sum = Mathematics + English + Science + Social_Science + Hindi;
        float Percentage = sum*100/500;
        System.out.print("Percentage : ");
        System.out.print(Percentage);
    }
}
