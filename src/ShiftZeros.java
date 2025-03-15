//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N

import java.util.ArrayList;
import java.util.Scanner;

public class ShiftZeros
{
    public static void main(String[]args)
    {
        Scanner cs=new Scanner(System.in);
        int n=cs.nextInt();
        ArrayList<Integer>v=new ArrayList<>(n);
        for(int i=0;i<n;i++)
        {
            v.add(cs.nextInt());
        }
        shiftZeros(v);
    }

    private static void shiftZeros(ArrayList<Integer>v)
    {
        int zeroindex=0;
        for(int i=0;i<v.size();i++)
        {
            if(zeroindex>v.size())
                break;
            if(v.get(i)==0)
            {
                v.remove(i);
                v.add(0);
                i--;
                zeroindex++;
            }
        }

        for(int i=0;i<v.size();i++)
        {
            if(i==v.size()-1)
                System.out.print(v.get(i));
            else
                System.out.print(v.get(i)+" ");

        }
    }

}
