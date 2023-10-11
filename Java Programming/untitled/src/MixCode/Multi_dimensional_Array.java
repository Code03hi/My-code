public class Multi_dimensional_Array {
    public static void main(String[] args) {
        int [] marks; // One Dimensional Array
        int [] [] flats ;
        flats = new int [2][3] ; // Two Dimensional Array
        flats[0][0] = 101;
        flats[0][1] = 102;
        flats[0][2] = 103;
        flats[1][0] = 201;
        flats[1][1] = 202;
        flats[1][2] = 203;
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<3;j++)
            {
                System.out.println(flats[i][j]);
            }
        }
    }
}
