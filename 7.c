<?php
session_start();
$_SESSION['data'] = array("name"=>"vaibhav","city"=>"Delhi");
$encoded = json_encode($_SESSION['data']);
$decoded = json_decode($encoded, true);
echo "Encoded: $encoded\n";
echo "Decoded Name: ".$decoded['name'];
?>