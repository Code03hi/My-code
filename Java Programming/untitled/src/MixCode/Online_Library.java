import java.util.*;
class Library
{
    Scanner sc = new Scanner(System.in);
    public void addBook(String book)
    {
        int Number;
        System.out.print("Enter The Quantity Of Book : ");
        Number = sc.nextInt();
        String [] add = new String[Number];
        for (int i=0;i<Number;i++)
        {
            System.out.print("Enter The Book Name : ");
            add[i] = sc.nextLine();
        }
    }
    public void issueBook()
    {

    }
}
public class Online_Library {
    public static void main(String[] args) {

    }
}
