<?php
require("../api/gd2.inc");

$nombrep = $_GET["nombrepersona"];
$anglep = $_GET["angle"];
$posx = $_GET["posx"];
$posy = $_GET["posy"];
$fsize = $_GET["fsize"];
$fte = $_GET["fuente"];
$logo = $_GET["logo"];
$logox = $_GET["logox"];
$logoy = $_GET["logoy"];

$ecard->MakeCard("540","300","white",$fte, $posx, $posy, "negro", $fsize, $anglep, $nombrep, $logo, $logox, $logoy);
