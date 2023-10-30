package swingandbutton;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AEvent extends Frame implements ActionListener{
    TextField tf;
    AEvent(){
        Button b1 = new Button ("Show");
        Button b3 = new Button("Next");
        Button b2 = new Button("Back");
        tf = new TextField();
        Label lf = new Label("Text : ");
        b1.setBounds(200,200,100,40);
        b2.setBounds(100,200,100,40);
        b3.setBounds(300,200,100,40);
        tf.setBounds(180,100, 150, 40);
        lf.setBounds(180, 60, 120, 60);
        add(b1);
        add(b2);
        add(b3);
        add(tf);
        add(lf);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);

        setSize(500, 500);
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e )
    {
        if (e.getActionCommand().equals("Show")) {
            tf.setText("Welcome to Java");
        } else if (e.getActionCommand().equals("Next")) {
            tf.setText("Next Button Clicked");
        } else if (e.getActionCommand().equals("Back")) {
            tf.setText("Back Button Clicked");
        }
    }
    public static void main (String args [])
    {
        new AEvent();
    }
}
