interface GPS1
{
    public int a=45;
    void GPS_Work();
//    {
//        System.out.println("I am track your location in every second !");
//    }
}

interface CAMERA1
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

interface Media_Player1
{
    void Music();
//    {
//        System.out.println("I am contain lots of music and videos !");
//    }
}

class cell_Phone1
{
    cell_Phone1()
    {
        System.out.println("I am cell Phone Constructor !");
    }
    public void Function()
    {
        System.out.println("I have key pad function !");
        System.out.println("I am also use in alarm !");
    }
}

class Smart_Phone1 extends cell_Phone1 implements GPS1,CAMERA1,Media_Player1
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
public class Polymorphism {
    GPS1 g =  new Smart_Phone1();  // This is a smartphone but please use it as a GPS tracker
    Smart_Phone1 s = new Smart_Phone1();
//    s.Music();
//    g.Music();
//    g.GPS_Work();
}
