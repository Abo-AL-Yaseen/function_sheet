//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I

import java.sql.Array;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class SwappingWithMatrix
{
    public static void main(String[]args)
    {
        Scanner cs = new Scanner(System.in);
        int nn = cs.nextInt();
        int x = cs.nextInt();
        int y = cs.nextInt();
        ArrayList<ArrayList<Integer>> v = new ArrayList<>();

        for(int i=0;i<nn;i++)
        {
            v.add(new ArrayList<>());
            for(int j=0;j<nn;j++)
            {
                v.get(i).add(cs.nextInt());
            }
        }

        swapRow(nn,x,y,v);
        swapColumn(nn,x,y,v);

        for(int i=0;i<nn;i++)
        {
            for(int j=0;j<nn;j++)
            {
                if(j>0)
                    System.out.print(" ");
                System.out.print(v.get(i).get(j));
            }
            System.out.println();
        }
    }

    private static void swapRow(int n,int x,int y,ArrayList<ArrayList<Integer>> v)
    {

            Collections.swap(v,x-1,y-1);

    }

    private static void swapColumn(int n,int x,int y,ArrayList<ArrayList<Integer>> v)
    {
        for(int i=0;i<n;i++)
        {
            Collections.swap(v.get(i),x-1,y-1);
        }
    }
}
