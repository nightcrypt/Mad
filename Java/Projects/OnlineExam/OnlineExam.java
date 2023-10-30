package Projects.OnlineExam;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class OnlineExam extends JFrame implements ActionListener {

    JLabel l;
    JRadioButton jb[] = new JRadioButton[5];
    JButton b1,b2,b3;
    ButtonGroup bg;
    int []m = new int[10];
    int count = 0 ,  current =0 , x = 1, y=1 , now =0;

    OnlineExam(String s)
    {
        super (s);
        l= new JLabel();
        b1 = new JButton("Next");
        b2 = new JButton("Bookmark");
        b3 = new JButton("Back");
        bg = new ButtonGroup();
        for (int i = 0 ; i<5;i++)
        {
            jb[i] = new JRadioButton();
            add(jb[i]);
            bg.add(jb[i]);
        }
        add(l);
        add(b1);
        add(b2);
        add(b3);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        set();
        l.setBounds(30,40,450,20);  
        jb[0].setBounds(50,80,100,20);  
        jb[1].setBounds(50,110,100,20);  
        jb[2].setBounds(50,140,100,20);  
        jb[3].setBounds(50,170,100,20);  
        b1.setBounds(100,240,100,30);  
        b2.setBounds(270,240,100,30); 
        b3.setBounds(390,240,100,30);  
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  
        setLayout(null);  
        setLocation(250,100);  
        setVisible(true);  
        setSize(600,350);  
    }

    public void actionPerformed(ActionEvent e)
    {
        if (e.getSource() == b1)
        {
            if (check())
            {
                count =count+1;
            }  

            current++;
            set();

            if (current==9)
            {
                b1.setEnabled(false);
                b2.setText("Submit");
            }
        }
        
        if (e.getActionCommand().equals("Back"))
        {
            if (current>0)
            current--;
            set();

        }
        if (e.getActionCommand().equals("Submit"))
        {
            if (check())
            count=count+1;

            current++;
            JOptionPane.showMessageDialog(this ,"Marks = "+count);
            System.exit(0);
        }

    }

    void set()
    {
    
        if (current==0)
        {
            l.setText("Question 1 : What is 1+1 ? ");
            jb[0].setText("0");jb[1].setText("2");jb[2].setText("5");jb[3].setText("4");
        }
        if (current==1)
        {
            l.setText("Question 2 : What is 1+2 ? ");
            jb[0].setText("0");jb[1].setText("2");jb[2].setText("3");jb[3].setText("4");
        }
        if (current==2)
        {
            l.setText("Question 3 : What is 2+2 ? ");
            jb[0].setText("0");jb[1].setText("2");jb[2].setText("5");jb[3].setText("4");
        }
        if (current==3)
        {
            l.setText("Question 4 : What is 5+5 ? ");
            jb[0].setText("10");jb[1].setText("2");jb[2].setText("5");jb[3].setText("4");
        }
        if (current==4)
        {
            l.setText("Question 5 : What is 3+3 ? ");
            jb[0].setText("0");jb[1].setText("2");jb[2].setText("5");jb[3].setText("6");
        }
        if (current==5)
        {
            l.setText("Question 6 : What is 9+5 ? ");
            jb[0].setText("0");jb[1].setText("2");jb[2].setText("5");jb[3].setText("14");
        }
        if (current==6)
        {
            l.setText("Question 7 : What is 5+8 ? ");
            jb[0].setText("0");jb[1].setText("13");jb[2].setText("5");jb[3].setText("4");
        }
        if (current==7)
        {
            l.setText("Question 8 : What is 5+7 ? ");
            jb[0].setText("0");jb[1].setText("2");jb[2].setText("12");jb[3].setText("4");
        }
        if (current==8)
        {
            l.setText("Question 9 : What is 9+1 ? ");
            jb[0].setText("0");jb[1].setText("10");jb[2].setText("5");jb[3].setText("4");
        }
        if (current==9)
        {
            l.setText("Question 10 : What is 4+3 ? ");
            jb[0].setText("7");jb[1].setText("2");jb[2].setText("5");jb[3].setText("4");
        }
    }
    boolean check()
    {
        if (current==0)
         return(jb[1].isSelected());

        if (current==1)
         return(jb[2].isSelected());

        if (current==2)
         return(jb[3].isSelected());

        if (current==3)
         return(jb[0].isSelected());

        if (current==4)
         return(jb[3].isSelected());

        if (current==5)
         return(jb[3].isSelected());

        if (current==6)
         return(jb[1].isSelected());

        if (current==7)
         return(jb[2].isSelected());

        if (current==8)
         return(jb[1].isSelected());

        if (current==9)
         return(jb[0].isSelected());

        return false;

    }

    public static void main (String s [])
    {
        new OnlineExam("Online Test");
    }
    
}
