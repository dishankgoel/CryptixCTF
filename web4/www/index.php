<?php

include_once 'flag.php';

if($_SERVER["REQUEST_METHOD"] == "POST"){
    if(isset($_POST["ID"])&&isset($_POST["pwd"])){
        if(strcmp($secretpassphrase, $_POST["pwd"]) == 0){
            echo "Hey, you are in!  " . $_POST["ID"]  . "<br>";
            if($_POST["ID"] == "SuperUser1337"){
                echo "Your Flag: " . $flag;
            }
        }else{
            echo "<script type='text/javascript'>alert('Unable to Login');</script>";
        }
    }
}

?>