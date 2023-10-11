package App_And_Software;
import javax.swing.*;
import java.awt.*;
import java.io.*;
import java.awt.event.*;
public class NotePad implements ActionListener{
    JMenuBar menuBar ;
    JMenu file,edit,view,help;
    JMenuItem cut,copy,paste,selectAll,newTab,newWindow,open,save,saveAs,saveAll,pageSetup,print,closeTab,closeWindow,exit,zoom,statusBar,wordWrap,helpBar,contactSupport,feedback,showTraining;
    JTextArea area;
    JFileChooser fileChooser;
    JFrame frame = null;
    NotePad()
    {
        cut.addActionListener(this);
        copy.addActionListener(this);
        paste.addActionListener(this);
        selectAll.addActionListener(this);
        newTab.addActionListener(this);
        newWindow.addActionListener(this);
        open.addActionListener(this);
        save.addActionListener(this);
        saveAs.addActionListener(this);
        saveAll.addActionListener(this);
        pageSetup.addActionListener(this);
        print.addActionListener(this);
        closeTab.addActionListener(this);
        closeWindow.addActionListener(this);
        closeTab.addActionListener(this);
        exit.addActionListener(this);
        zoom.addActionListener(this);
        statusBar.addActionListener(this);
        wordWrap.addActionListener(this);
        helpBar.addActionListener(this);
        contactSupport.addActionListener(this);
        feedback.addActionListener(this);
        showTraining.addActionListener(this);
        frame = new JFrame("Notepad");
        file = new JMenu("File");
        newTab = new JMenuItem("New Tab");
        newWindow = new JMenuItem("New Window");
        open = new JMenuItem("Open");
        save = new JMenuItem("Save");
        saveAs = new JMenuItem("Save As");
        saveAll = new JMenuItem("Save All");
        pageSetup = new JMenuItem("Page setup");
        print = new JMenuItem("Print");
        closeTab = new JMenuItem("Close Tab");
        closeWindow = new JMenuItem("Close Window");
        exit = new JMenuItem("Exit");
        file.add(newTab);
        file.add(newWindow);
        file.add(open);
        file.add(save);
        file.add(saveAs);
        file.add(saveAll);
        file.add(pageSetup);
        file.add(print);
        file.add(closeTab);
        file.add(closeWindow);
        file.add(exit);
        edit = new JMenu("Edit");
        cut = new JMenuItem("cut");
        copy = new JMenuItem("copy");
        paste = new JMenuItem("paste");
        selectAll = new JMenuItem("selectAll");
        edit.add(copy);
        edit.add(cut);
        edit.add(paste);
        edit.add(selectAll);
        view = new JMenu("View");
        zoom = new JMenuItem("zoom");
        statusBar = new JMenuItem("Status Bar");
        wordWrap = new JMenuItem("Word Wrap");
        view.add(zoom);
        view.add(statusBar);
        view.add(wordWrap);
        help = new JMenu("Help");
        helpBar = new JMenuItem("Help");
        contactSupport = new JMenuItem("Contact Support");
        feedback = new JMenuItem("Feedback");
        showTraining = new JMenuItem("Show Training");
        help.add(helpBar);
        help.add(contactSupport);
        help.add(feedback);
        help.add(showTraining);
        menuBar = new JMenuBar();
        menuBar.add(file);
        menuBar.add(edit);
        menuBar.add(view);
        menuBar.add(help);
        area = new JTextArea();
        area.setBounds(0,0,1000,1000);
        frame.setJMenuBar(menuBar);
        frame.setSize(400,400);
        frame.setVisible(true);
        frame.setLayout(null);
    }
    public void actionPerformed(ActionEvent e)
    {
        if (e.getSource()==cut)
        {
            area.cut();
        }
        if (e.getSource()==paste)
        {
            area.paste();
        }
        if (e.getSource()==copy)
        {
            area.copy();
        }
        if (e.getSource()==selectAll)
        {
            area.selectAll();
        }
        if (e.getSource()==open)
        {
            JFileChooser chooser = new
        }
    }
    public static void main(String[] args) {
        new NotePad();
    }
}
