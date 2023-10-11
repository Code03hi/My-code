package String;
//The substring() method can also be used to check whether a string is a palindrome or not.
public class SubStringExample4 {
        public boolean isPalindrome(String str)
        {
            int size = str.length();
            // handling the base case
            if (size == 0 || size == 1)
            {
                // an empty string
                // or a string of only one character
                // is always a palindrome
                return true;
            }
            String f = str.substring(0,1);
            String l = str.substring(size - 1);
            // comparing first and last character of the string
            if (l.equals(f))
            {
                // recursively finding the solution using the substring() method
                // reducing number of character of the by 2 for the next recursive
                return isPalindrome(str.substring(1,size-1));
            }
            return false;
        }
    public static void main(String[] args) {
        // instantiating the class SubstringExample4
        SubStringExample4 obj = new SubStringExample4();
        String str[] =
                {
                        "madam",
                        "rock",
                        "eye",
                        "noon",
                        "kill"
                };
        int size = str.length;
        for (int i = 0; i < size; i++) {
            if (obj.isPalindrome(str[i]))
            {
                System.out.println(str[i] + " is a palindrome.");
            }
            else
            {
                System.out.println(str[i] + "is not a palindrome.");
            }
        }
    }
}
