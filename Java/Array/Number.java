package Array;
import java.util.Scanner; 

public class Number {

    public static void main (String[] args)
    {
        Scanner s1 = new Scanner(System.in);
        int[] a = new int[10];
        
        // Input values into the array
        for (int i = 0; i < a.length; i++)
        {
            a[i] = s1.nextInt();
        }
        s1.close();
        
        // Print the array values, indices, and positions
        System.out.println("Array Value\tIndex value\tPosition");
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i] + "\t\t" + i + "\t\t" + (i + 1));
        }
    }
}
