//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

import java.util.Scanner;

public class nTime
{
    public static void main(String[]args)
    {
        Scanner cs=new Scanner(System.in);
        int t=cs.nextInt();
        while(t!=0)
        {
            int n=cs.nextInt();
            String c=cs.next();
            NTime(n,c);
            t--;
        }
    }

    private static void NTime(int n, String c)
    {
        System.out.print(c);
        for(int i=1;i<n;i++)
        {
            System.out.print(" ");
            System.out.print(c);
        }
        System.out.println();
    }
}
