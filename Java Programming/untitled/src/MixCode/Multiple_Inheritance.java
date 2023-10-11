interface GPS
{
    public int a=45;
    void GPS_Work();
//    {
//        System.out.println("I am track your location in every second !");
//    }
}

interface CAMERA
{
    void Camera();
//    {
//        System.out.println("I am click your picture and snap !");
//    }
    default void Take_Video()
    {
        System.out.println("Make a video of Yours");
    }
}

interface Media_Player
{
    void Music();
//    {
//        System.out.println("I am contain lots of music and videos !");
//    }
}

class cell_Phone
{
    cell_Phone()
    {
        System.out.println("I am cell Phone Constructor !");
    }
    public void Function()
    {
        System.out.println("I have key pad function !");
        System.out.println("I am also use in alarm !");
    }
}

class Smart_Phone extends cell_Phone implements GPS,CAMERA,Media_Player
{
    String [] name = {"Bhagwan jha","Drishti Sharma"};
    public int a;
    public void Music()
    {
        System.out.println("I am contain lots of music and videos !");
    }
    public void Camera()
    {
        System.out.println("I am click your picture and snap !");
    }
    public void GPS_Work()
    {
        System.out.println("I am track your location in every second !");
    }
}

public class Multiple_Inheritance {
    public static void main(String[] args) {
//        GPS g = new Smart_Phone();
        Smart_Phone s = new Smart_Phone();
//        g.GPS_Work();
        s.GPS_Work();
        s.a = 45;
        String [] s1 = s.name;
        String s2 = s.name[0];
        System.out.println("Love " + s2);
        for (String item:s1) {
            System.out.println(item);
        }
    }
}
