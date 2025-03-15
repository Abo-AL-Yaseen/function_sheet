//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;

public class NewArray
{
    public static void main(String[]args)
    {
        Scanner cs =new Scanner(System.in);
        int n=cs.nextInt();
        ArrayList<Integer>a=new ArrayList<>(n);
        ArrayList<Integer>b=new ArrayList<>(n);
        for(int i=0;i<n;i++)
        {
            a.add(cs.nextInt());
        }

        for(int i=0;i<n;i++)
        {
            b.add(cs.nextInt());
        }

        concatinationArray(a, b);
    }
    private static void concatinationArray(ArrayList<Integer>a,ArrayList<Integer> b)
    {
        int n=a.size()+b.size();
        ArrayList<Integer>c=new ArrayList<>(n);
        c.addAll(b);
        c.addAll(a);

        for(int i=0;i<n;i++)
        {
            if(i==n-1)
                System.out.print(c.get(i));
            else
                System.out.print(c.get(i)+" ");
        }
    }
}
