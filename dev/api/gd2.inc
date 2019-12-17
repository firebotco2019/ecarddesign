<?php

header("Expires: Tue, 01 Jan 2000 00:00:00 GMT");
header("Last-Modified: " . gmdate("D, d M Y H:i:s") . " GMT");
header("Cache-Control: no-store, no-cache, must-revalidate, max-age=0");
header("Cache-Control: post-check=0, pre-check=0", false);
header("Pragma: no-cache");

class eCard {

function MakeCard($shapex, $shapey, $bgcolor, $fuente, $textox, $textoy, $texto_color, $texto_size, $texto_angle, $texto, $logo, $logox, $logoy){
header('Content-Type: image/png');

$ancho = 100;
$alto = 100;

 $im = imagecreatetruecolor($shapex, $shapey);
 switch($bgcolor){
   case "blanco":
     $bg_color = imagecolorallocate($im, 255, 255, 255);
     break;
   case "negro":
     $bg_color = imagecolorallocate($im, 0, 0, 0);
     break;
   default:
     $bg_color = imagecolorallocate($im, 255, 255, 255);
     break;
 }
 switch($texto_color){
   case "blanco":
     $textocol = imagecolorallocate($im, 255, 255, 255);
     break;
   case "negro":
     $textocol = imagecolorallocate($im, 0, 0, 0);
     break;
   default:
     $textocol = imagecolorallocate($im, 255, 255, 255);
     break;
 }
 switch($fuente){
   case "Anton":
     $font = realpath('.') . '/fonts/Anton.ttf';
     break;
   case "Dosis":
     $font = realpath('.') . '/fonts/Dosis.ttf';
     break;
   case "Lobster":
     $font = realpath('.') . '/fonts/Lobster.ttf';
     break;
   case "Pacifico":
     $font = realpath('.') . '/fonts/Pacifico.ttf';
     break;
   case "Ubuntu":
     $font = realpath('.') . '/fonts/Ubuntu.ttf';
     break;
   default:
     $font = realpath('.') . '/fonts/Ubuntu.ttf';
     break;
 }

 $texto = str_replace("_", "\n", $texto);

 imagefilledrectangle($im, 0, 0, $shapex, $shapey, $bg_color);
 
 if($logo){
  $imagenc = realpath('.') . '/logos/' . $logo;
  $logos = imagecreatefrompng($imagenc);
  list($ancho, $alto) = getimagesize($imagenc);
  imagecopyresampled($im, $logos, $logox, $logoy, 0, 0, 100, 100, $ancho, $alto);
 }

 imagettftext($im, $texto_size, $texto_angle, $textox, $textoy, $textocol, $font, $texto);

 imagesavealpha($im, true);

 imagepng($im);
 imagedestroy($im);
}

}

$ecard = new eCard();
