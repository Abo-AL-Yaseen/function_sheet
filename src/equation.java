//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F


import java.util.Scanner;
import static java.lang.Math.pow;

public class equation
{
    public static void main(String[] args)
    {
        Scanner cs = new Scanner(System.in);
        long  x = cs.nextLong();
        long y = cs.nextLong();
        cs.close();
       function_equation(x,y);
    }

    private static void function_equation(long xs, long ns)
    {
        long result = 0;
        for (int i = 2; i <= ns; i += 2)
        {
            result+=(long)pow(xs,i);
        }
        System.out.println(result);
    }
}
