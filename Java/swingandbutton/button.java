package swingandbutton;
import java.awt.*;

public class button  {


    button(){
        Frame f = new Frame();
        Button b = new Button("Submit");
        b.setBounds(100, 100, 80, 40);
        Label l= new Label("Text : ");
        l.setBounds(30, 50, 100, 20);
        TextField t = new TextField();
        t.setBounds(60, 50, 170, 20);
        f.add(b);
        f.add(t);
        f.add(l);
        f.setSize(300, 300);
        f.setTitle("TEST");
        f.setLayout(null);
        f.setVisible(true);
    }

    public static void main (String args[])
{
    button b = new button();
    
}
}



