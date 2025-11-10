<?php
session_start();
$_SESSION['username'] = "vaibhav";
$_SESSION['role'] = "Admin";
echo "Session started and variables stored";
?>