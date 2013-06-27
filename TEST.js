importPackage(java.io);
importPackage(java.lang);
var reader = new BufferedReader( new InputStreamReader(System['in']) );
var s = true;
while(s){
s=reader.readLine();
if(s){
if(+s !== 42)
System.out.println(s);
else
break;
}
}
