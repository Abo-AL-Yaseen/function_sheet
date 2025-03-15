//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;

public class DistinctNumbers
{
    public  static void main(String[]args)
    {
        Scanner cs=new Scanner(System.in);
        int n=cs.nextInt();
        ArrayList<Integer>v=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            v.add(cs.nextInt());
        }
        distNumber(v);
    }

    private static void distNumber(ArrayList<Integer>v)
    {
        HashSet<Integer> s=new HashSet<>(v);
        System.out.print(s.size());
    }
}
