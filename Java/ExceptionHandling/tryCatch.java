package ExceptionHandling;

public class tryCatch {
    public static void main (String args [])
    {
        try{
            int i, c;
            int a = 50;
            i=10;
        
            c= a/i;
            c=i/0;

        }
        catch(ArithmeticException e )
        {
            System.out.println("Error" + e);
        }


    }
    
}
