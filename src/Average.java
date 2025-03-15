//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J


import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Scanner;

public class Average
{
    public static void main(String[]args)
    {
        Scanner cs =new Scanner(System.in);
        int n=cs.nextInt();
        ArrayList<Double>v=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            v.add(cs.nextDouble());
        }
        average(n,v);
    }
    private static void average(int n,ArrayList<Double>v)
    {
        double sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v.get(i);
        }
        double res=sum/n;
        DecimalFormat dc =new DecimalFormat();
        dc.setMaximumFractionDigits(7);
        dc.setMinimumFractionDigits(7);
        System.out.print(dc.format(res));
    }
}
