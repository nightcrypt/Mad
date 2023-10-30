package NumberProject;
import java.util.Scanner;
public class add {
    public static void main(String []args)
    {
        Scanner s1 = new Scanner(System.in);
        int a, b,c;
        a=s1.nextInt();
        b=s1.nextInt();
        c=a+b;
        System.out.println("Sum of Two number : "+c);
        s1.close();
    }
    
}
