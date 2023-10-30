package Sort;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class SortingBySort {
    public static void main(String args[]) {
        Scanner s1 = new Scanner(System.in);
        ArrayList<Integer> n1 = new ArrayList<>();
        int c, i;
        System.out.println("Enter the Number of elements You want : ");
        c = s1.nextInt();

        System.out.println(("Enter the Elements : "));
        for (i = 0; i < c; i++) {
            int element = s1.nextInt();
            n1.add(element); // Add each element to the ArrayList
        }

        System.out.println("Unsorted ArrayList: " + n1);
        Collections.sort(n1); // Sort the ArrayList

        System.out.println("Sorted ArrayList: " + n1);
        s1.close();
    }
}
