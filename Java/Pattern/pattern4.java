package Pattern;

public class pattern4 {
    public static void main (String args[])
    {
        int i, j;
        System.out.println(" 0\n");
        for (i=9;i>=1;i--)
        {
             for(j=i;j<=9;j++)
            {
                System.out.print( " "+j );
            }
            System.out.print(" 0");
            for(j=9;j>=i;j--)
            {
                System.out.print(" "+j);
            }
         System.out.println("\n");
        }
    }    
    
}
