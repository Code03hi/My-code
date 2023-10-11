package RMIProgram;

public class ServerMain {
    public static void main(String[] args) throws Exception {
        ServerImplement obj = new ServerImplement();
        int fact = obj.fact(5);
        System.out.println(fact);
    }
}
