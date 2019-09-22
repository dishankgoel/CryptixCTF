<?php
require_once "config.php";

if($_SERVER["REQUEST_METHOD"] == "POST"){
    if(isset($_POST['pwd'])){$pass = $_POST['pwd'];}else{echo 'no passwoord';}

    $query = "SELECT * FROM data where password='$pass'";

    $result = mysqli_query($link, $query);
    if (!$result){
        die("cannot execute query");
    }else{
        $row = mysqli_fetch_array($result);
        if($row){
            echo "You thought it would be that easy?! Hahaha. There is no flag.<br>But since you have passed the phrase check, here is the query <br> SELECT * FROM data where password='XXXXX'  :)";
        }
        else{
            echo "Please just stop guessing.";
        }
    }

}


?>