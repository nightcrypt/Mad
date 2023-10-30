package NumberProject;
import java.util.Scanner;

public class neonNo {
    public static void main(String[]args)
    {
        Scanner s1=new Scanner (System.in);
        int a,b,c,i=0;
        System.out.println("Enter the Number to check for Neon number : ");
        a=s1.nextInt();
        //b=s1.nextInt();
        b=a*a;
        while(b>=1)
        {
            c=b%10;
            i+=c;
            b=b/10;
        }
        if(a==i)
        {
            System.out.println("It is a Neon Nummber");
        }
        else{

            System.out.println("It is not a Neon Number");
        }
        s1.close();
    }

    
}
