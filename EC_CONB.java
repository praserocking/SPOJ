import java.io.*;
class solve{
	public static void main(String[] _)throws Throwable{
		int t,n;
		BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
		t=Integer.parseInt(bf.readLine());
		while(t!=0){
			t--;
			n=Integer.parseInt(bf.readLine());
			if(n%2==1)System.out.println(n);
			else{
				String s=Integer.toBinaryString(n);
				s=new StringBuffer(s).reverse().toString();
				System.out.println(Integer.parseInt(s,2));
			}
		}
	}
}

