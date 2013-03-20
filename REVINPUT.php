<?php
fscanf(STDIN,"%d",$n);
$l=trim(fgets(STDIN));
$p=explode(" ",$l);
$i=count($p)+1;
do
{
$k=strrev($p[$i]);
for($x=0;$x<$n;$x++)
echo $k;
$i--;
}while($i!=0);
?>



