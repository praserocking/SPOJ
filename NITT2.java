package spoj;

import java.io.*;
import java.math.*;
class Main
{
    public static void main(String[] args)
    {
        int t;
        BigInteger a,b,c,d;
        c=new BigInteger("525");
        d=new BigInteger("252");
        try{
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        t=Integer.parseInt(in.readLine());
        while((t--)!=0)
        {
            a=new BigInteger(in.readLine());
            if(a.mod(d).equals(new BigInteger("0")))
                System.out.print("Yes\t");
            else
                System.out.print("No\t");
            if(a.mod(c).equals(new BigInteger("0")))
                System.out.print("Yes\n");
            else
                System.out.print("No\n");
        }
        }catch(Exception e){}
    }
}






