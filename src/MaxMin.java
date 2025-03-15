//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
import java.util.ArrayList;
import java.util.Scanner;
import java.util.ArrayList;
public class MaxMin
{
    public static void main(String[]args)
    {
        Scanner cs=new Scanner(System.in);
        int n=cs.nextInt();
        ArrayList<Integer> array=new ArrayList<>(n);
        for(int i=0;i<n;i++)
        {
            array.add(cs.nextInt());
        }
        maxMin(array);

    }

   private static void maxMin(ArrayList<Integer> arrays)
    {
        int maxi=arrays.get(0);
        int mini=arrays.get(0);
        for(int i=0;i<arrays.size();i++)
        {
            if(mini>arrays.get(i))
                mini=arrays.get(i);
            if(maxi<arrays.get(i))
                maxi=arrays.get(i);
        }
        System.out.print(mini);
        System.out.print(" ");
        System.out.println(maxi);
    }

}
