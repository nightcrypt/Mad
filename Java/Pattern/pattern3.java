package Pattern;

public class pattern3 {

    public static void main (String args[])
    {
        int i,j;
        for(i=4;i>=1;i--)
        {
            for(j=1;j<=4;j++)
            {
                if(j>i)
                {
                    System.out.print(" *");
                }    
                else
                System.out.print(" "+j);
            }
            for(j=4;j>=1;j--)
            {
                if(j>i)
                {
                    System.out.print(" *");
                }
                else
                System.out.print(" "+j);
            }
            System.out.println("\n");
        }
    }
    
}
