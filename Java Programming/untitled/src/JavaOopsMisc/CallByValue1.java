package JavaOopsMisc;

public class CallByValue1 {
    int data=50;
    void change(CallByValue1 op)
    {
        op.data = op.data + 100 ; // changes will be in the instance variable
    }

    public static void main(String[] args) {
        CallByValue1 op = new CallByValue1();
        System.out.println("Before change : " + op.data);
        op.change(op); // passing object
        System.out.println("After change : " + op.data);
    }
}
