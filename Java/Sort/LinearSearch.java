package Sort;
import java.util.Scanner;

public class LinearSearch {

    public static int linearSearch( int array[], int x)
    {
        int n = array.length;

        for (int i=0;i<n;i++)
        {
            if(array[i]==x)  
            return i;
       
        }
        return -1;
    }

    public static void main (String args [])
    {
        Scanner s = new Scanner (System.in);
        int a;
        System.out.println("Enter the Elements you want in a Array : ");
        a=s.nextInt();
        int []b =new int[a];
        int c =5;
        System.out.println("Enter the Element : ");
        for (int i =0;i<a;i++)
        {
            b[i]=s.nextInt();
        }
        int result = linearSearch(b, c);
        if (result == -1)
        System.out.print("Element not found");
      else
        System.out.println("Element found at index: " + result);
        s.close();

    }
        
}
