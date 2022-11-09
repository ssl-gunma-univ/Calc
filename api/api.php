<?php
header('Access-Control-Allow-Origin: *');
header('Access-Control-Allow-Headers: Content-Type, Origin, X-Requested-With');
header('Access-Control-Allow-Methods: POST, GET');
header('Content-Type: text/plain; charset=UTF-8');

// Change depending on the locale of your server
putenv("LANG=C.UTF-8");
setlocale(LC_CTYPE, "C.UTF-8");

$num1 = $_POST['num1'];
$num2 = $_POST['num2'];
$op = $_POST['op'];

exec("./calc $num1 $num2 \"$op\"", $output);

for ($i = 0; $i < count($output); $i++) {
    echo $output[$i] . '<br>';
}
?>