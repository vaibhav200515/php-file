<?php
session_start();
$_SESSION['username'] = "vaibhav";
$_SESSION['role'] = "Admin";
$_SESSION['role'] = "Editor";
echo "Updated role: ".$_SESSION['role'];
?>