package Multithreading;

public class multi1 extends Thread {

    public void run ()
    {
        try
        {
          for (int i =0 ;i<6;i++)
          {
            System.out.println("Hello");
          }  
        }catch (Exception e){System.out.println(e);}

    }
    
}
class B 
{
    public static void main (String [] args)
    {
        multi1 a = new multi1();
        a.run();
        for (int i =0 ;i<6;i++)
        {
            System.out.println("world");
        }
    }
}
