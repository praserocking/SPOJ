<?php
fscanf(STDIN,"%d",$n);
$line=trim(fgets(STDIN));
$piece=explode(" ",$line);
$i=count($piece)+1;
do
{
$k=strrev($piece[$i]);
for($x=0;$x<$n;$x++)
echo $k;
$i--;
}while($i!=0);
?>



