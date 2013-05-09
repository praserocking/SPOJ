import java.io.*;
class Main
{
    public static void main(String[] args)
    {
        int a;
        try{
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        while(true)
        {
            a=Integer.parseInt(in.readLine());
            if(a==42)
                break;
            else
                System.out.println(a+"\n");
        }
        }catch(Exception e){}
    }
}
 
