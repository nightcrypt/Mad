package FileHandling;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.Scanner;

import org.w3c.dom.Text;

public class School implements Serializable {
    
    int rollno;
    int marks;
    String name;

    School(int rollno, int marks, String name)
    {
        this.rollno = rollno;
        this.marks=marks;
        this.name= name;

    }
    public String Dispaly ()
    {
       return name;
    }

}
 class B
{
    public static void main (String []args)
    {
        School s1 = new School(1, 60, "Mohit");
        Scanner sc = new Scanner(System.in);
        try 
        {
            File f1 = new File ("/home/nightcrypt29/Coding by mohit bishnoi/Java/FileHandling/Student2.txt");
            if(f1.exists())
            {
                System.out.println("Already Exists");
            }
            else
            {
                f1.createNewFile();
                System.out.println("file " + f1.getName()+ " is succesfully created");

            }
            FileWriter fw= new FileWriter(f1);
            fw.write("Text");
            System.out.println("file location " + f1.getAbsolutePath());
            FileOutputStream f0 = new FileOutputStream(f1);
            ObjectOutputStream oo = new ObjectOutputStream(f0);
            oo.writeObject(s1);
            oo.close();

        }catch (IOException e ){System.out.println(e);}
        

    }
}
