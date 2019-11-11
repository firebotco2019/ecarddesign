$( document ).ready(function() {
 var NombrePersona = "";
 var Angle = 0;
 var PosX = 10;
 var PosY = 20;
 var FSize = 12;
 $("#nombre_persona").change(function(e){
   NombrePersona = $(this).val();
   NombrePersona = NombrePersona.replace(/\s+/g, '+');
   eCard(NombrePersona, Angle, PosX, PosY, FSize);
 });
 $("#anglex").change(function(){
   Angle = $(this).val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize);
 });
 $("#posx").change(function(){
   PosX = $(this).val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize);
 });
 $("#posy").change(function(){
   PosY = $(this).val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize);
 });
 $("#fsize").change(function(){
   FSize = $(this).val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize);
 });

});

function eCard(NombrePersona, Angle, PosX, PosY, FSize){
 $("#previo").css({"background-image":"url(/ecard.php?nombrepersona=" + NombrePersona + "&angle=" + Angle + "&posx=" + PosX + "&posy=" + PosY + "&fsize=" + FSize + ")", "background-repeat":"no-repeat", "background-size":"cover", "-webkit-background-size":"cover"})
}
