package String;
//        The substring() method can be used to do some prefix or suffix extraction. For example, we can have a list of names,
//        and it is required to filter out names with surname as "singh". The following program shows the same.
public class SubsStringExample3 {
    public static void main(String[] args) {
        String str[] =
        {
            "Praveen Kumar",
            "Yuvraj Singh",
            "Harbhajan Singh",
            "Gurjit Singh",
            "Virat kohli",
            "Rohit Sharma",
            "Sandeep Singh",
            "Milkha Singh"
        };
        String surName = "Singh";
        int surNameSize = surName.length();
        int size = str.length;
        for (int i = 0; i < size; i++) {
            // extracting the surname
            int length = str[i].length();
            String subStr = str[i].substring(length - surNameSize);
            // checks whether the surname is equal to "Singh" or not
            if (subStr.equals(surName))
            {
                System.out.println(str[i]);
            }
        }
    }
}
