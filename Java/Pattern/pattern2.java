package Pattern;
import java.util.Scanner;

public class pattern2 {

    public static void main (String args[])
    {
        Scanner scanner = new Scanner (System.in);
        System.out.println("Enter the Number of Row you want : ");
        int i, j;
        int row;
        row = scanner.nextInt();
        for(i=1;i<=row;i++)
        {
            
            for(j=1;j<=i;j++)
            {
                                
                System.out.print(i*j + "  ");
            }
            System.out.println("\n");
        }
        scanner.close();
    }
    
}
