package NumberProject;

public class fibonnaciNo {
    
    public static void main (String[]args)
    {
        
        int n=15,a=0,b=1,c;
        System.out.println("Fibonccai series upto " + n + " numbers");
        for(int i=1;i<=n;++i)
        {
            System.out.print(a  +  ", ");
            c=a+b;
            a=b;
            b=c;
        }


    }
}

