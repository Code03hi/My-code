public class Array_For_Each_Loop {
    public static void main(String[] args) {
        int [] arr = {54,69,89,23,15};
        String [] Student = {"BHAGWAN JHA ","DRISHTI " ,"MEGHA ","MUSKAN "};
        System.out.println(arr[0]);
        System.out.println(arr.length);
        System.out.println(Student[0]);
        for(String element : Student)
        {
            System.out.println(element);
        }
    }
}
