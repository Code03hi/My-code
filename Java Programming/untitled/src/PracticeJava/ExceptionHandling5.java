package PracticeJava;
import java.util.*;

class Duplicate_Number_Exception extends Exception
{
    Duplicate_Number_Exception(String message)
    {
        super(message);
    }
}
public class ExceptionHandling5 {
    public static void main(String[] args) {
        try
        {
            List <Integer> number = readNumberFromUser();
            checkDuplicates(number);
            System.out.println("No Duplicate numbers!");
        }
        catch (Duplicate_Number_Exception e)
        {
            System.out.println("Error : " + e.getMessage());
        }
    }
    public static List<Integer> readNumberFromUser()
    {
        List <Integer> numbers = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        System.out.println("How many number do you want to input ?");
        int count = scanner.nextInt();
        for (int i = 0; i < count; i++) {
            int num = scanner.nextInt();
            numbers.add(num);
        }
        scanner.close();
        return numbers;
    }
    public static void checkDuplicates(List <Integer> numbers) throws Duplicate_Number_Exception
    {
        Set <Integer> uniqueNumber = new HashSet<>();
        for (int num:numbers)
        {
            if (uniqueNumber.contains(num))
            {
                throw new Duplicate_Number_Exception("Duplicate number found : " + num);
            }
            uniqueNumber.add(num);
        }
    }
}
