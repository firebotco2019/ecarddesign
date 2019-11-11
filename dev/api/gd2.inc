<?php

class eCard {

function MakeCard($shapex, $shapey, $bgcolor, $fuente, $textox, $textoy, $texto_color, $texto_size, $texto_angle, $texto){
 header('Content-Type: image/png');
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
   case "Ubuntu":
     $font = "fonts/Ubuntu-Regular.ttf";
     break;
   default:
     $font = "fonts/Ubuntu-Regular.ttf";
     break;
 }
 imagefilledrectangle($im, 0, 0, $shapex, $shapey, $bg_color);
 imagettftext($im, $texto_size, $texto_angle, $textox, $textoy, $textocol, $font, $texto);
 
 imagepng($im);
 imagedestroy($im);
}

}

$ecard = new eCard();
