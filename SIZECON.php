<?php
fscanf(STDIN,"%d",$n);
$tot=0;
while($n--)
{
fscanf(STDIN,"%d",$s);
$tot=($s<0)?$tot:$tot+$s;
}echo $tot;
?>
