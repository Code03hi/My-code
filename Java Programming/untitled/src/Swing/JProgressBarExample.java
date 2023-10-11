package Swing;
import javax.swing.*;
public class JProgressBareExample extends JFrame {
    JProgressBar progressBar;
    int i=0,num=0;
    JProgressBareExample()
    {
        progressBar = new JProgressBar(0,2000);
        progressBar.setBounds(40,40,160,30);
        progressBar.setValue(0);
        progressBar.setStringPainted(true);
        add(progressBar);
        setSize(250,150);
        setLayout(null);
    }
    public void iterate()
    {
        while (i<=2000)
        {
            progressBar.setValue(i);
            i += 20;
            try {
                Thread.sleep(150);
            }
            catch (Exception e)
            {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) {
        ProgressBar
    }
}
