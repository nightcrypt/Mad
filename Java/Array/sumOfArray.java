package Array;
import java.util.Scanner;

public class sumOfArray {
    
    public static void main (String[]args)
    {
        Scanner s1=new Scanner (System.in);
        int n;
        int sum=0;
        System.out.println("Enter the Number of Element You Want");
        n=s1.nextInt();
        int []a=new int [n];
        System.out.println("Enter the Elements");
        for (int i=0;i<n;i++)
        {
            a[i]=s1.nextInt();
        }
        System.out.println("Sum of all Given Element is : ");
        for(int i=0;i<n;i++)
        {
            sum+=a[i];

        }
        System.out.println(sum);
        s1.close();
    }
    
}
