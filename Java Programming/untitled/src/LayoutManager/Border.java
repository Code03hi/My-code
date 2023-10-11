package LayoutManager;
import java.awt.*;
import javax.swing.*;
public class BorderLayout {
    JFrame frame;
    BorderLayout()
    {
        frame = new JFrame();
        // creating buttons
        JButton button1 = new JButton("NORTH"); // the button will be labeled as NORTH
        JButton button2 = new JButton("SOUTH"); // the button will be labeled as SOUTH
        JButton button3 = new JButton("EAST"); // the button will be labeled as EAST
        JButton button4 = new JButton("WEST"); // the button will be labeled as WEST
        JButton button5 = new JButton("CENTER"); // the button will be labeled as CENTER
        frame.add(button1,BorderLayout.NORTH);
    }
}
