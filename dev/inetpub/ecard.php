<?php
require("../api/gd2.inc");

$nombrep = $_GET["nombrepersona"];
$anglep = $_GET["angle"];
$posx = $_GET["posx"];
$posy = $_GET["posy"];
$fsize = $_GET["fsize"];

$ecard->MakeCard("360","200","white","Ubuntu", $posx, $posy, "negro", $fsize, $anglep, $nombrep);
