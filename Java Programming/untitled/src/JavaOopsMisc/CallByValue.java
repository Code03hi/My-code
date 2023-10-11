package JavaOopsMisc;
//        There is only call by value in java, not call by reference. If we call a method passing a value, it is known as call by value.
//        The changes being done in the called method, is not affected in the calling method.
public class CallByValue {
    int data = 50;
    void change(int data)
    {
        this.data = data + 100 ; // changes will be in the local variable only
    }

    public static void main(String[] args) {
        CallByValue op = new CallByValue();
        System.out.println("Before change : " + op.data);
        op.change(500);
        System.out.println("After change : " + op.data);
    }
}
