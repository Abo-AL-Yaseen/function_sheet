//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class ShiftRight
{
    public static void main(String[]args)
    {
        Scanner cs=new Scanner(System.in);
        int n=cs.nextInt();
        int x=cs.nextInt();
        ArrayList<Integer>v=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            v.add(cs.nextInt());
        }
        shiftedRight(x,v);
    }

    private static void shiftedRight(int x,ArrayList<Integer>v)
    {
        Collections.rotate(v,x);
        for (int i=0;i<v.size();i++)
        {
            if(i==v.size()-1)
                System.out.print(v.get(i));
            else
                System.out.print(v.get(i)+" ");

        }
    }
}
