<?php
function str_shift($str)
{
$len = $len % strlen($str);
return substr($str,1) . substr($str, 0, 1);
}
while(1)
{
fscanf(STDIN,"%s %d",$str,$d);
if($str==".")exit;
$t=$str;
for($i=0;$i<$d-1;$i++)
$t=$t.$str;
echo $t."\n";
for($i=0;$i<strlen($str)-1;$i++)
{
$t=str_shift($t);
echo $t."\n";
}
}
?>
