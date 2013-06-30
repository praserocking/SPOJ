<?php
function stripcase($str){
$a=explode("(",$str,2);
$b=explode(")",$a[1],2);
$case=explode(",",$b[0],2);
return $case;
}
 
$str=file_get_contents('php://stdin');
$lines=explode("\n",$str);
$case[][]=array();
$j=0;
foreach($lines as $i){
$res= stripcase($i);
$case[$j][0]=floatval($res[0]);
$case[$j][1]=floatval($res[1]);
$j++;
}
$dist=0.0;
for($i=0;$i<$j-1;$i++){
$dist+=sqrt(pow(($case[$i+1][0]-$case[$i][0]),2) + pow(($case[$i+1][1]-$case[$i][1]),2));
echo "The salesman has traveled a total of ".number_format($dist,3)." kilometers.\n";
}
?>
