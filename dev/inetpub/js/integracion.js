$( document ).ready(function() {
 var NombrePersona = "";
 var Angle = 0;
 var PosX = 10;
 var PosY = 20;
 var FSize = 12;
 var Fuente = "Anton";
 var Logo = "logo04.png";
 var LogoX = 420;
 var LogoY = 20;

 $("#nombre_persona").change(function(e){
   NombrePersona = $(this).val();
   NombrePersona = NombrePersona.replace(/\s+/g, '+');
   eCard(NombrePersona, Angle, PosX, PosY, FSize, Fuente, Logo, LogoX, LogoY);
 });
 $("#anglex").change(function(){
   Angle = $(this).val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize, Fuente, Logo, LogoX, LogoY);
 });
 $("#posx").change(function(){
   PosX = $(this).val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize, Fuente, Logo, LogoX, LogoY);
 });
 $("#posy").change(function(){
   PosY = $(this).val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize, Fuente, Logo, LogoX, LogoY);
 });
 $("#fsize").change(function(){
   FSize = $(this).val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize, Fuente, Logo, LogoX, LogoY);
 });
 $("#font").on('change', function() {
   Fuente =  this.value;
   eCard(NombrePersona, Angle, PosX, PosY, FSize, Fuente, Logo, LogoX, LogoY);
 });
 $("input[type='radio']").click(function(){
   Logo = $("input[name='logo']:checked").val();
   eCard(NombrePersona, Angle, PosX, PosY, FSize, Fuente, Logo, LogoX, LogoY);
 });
});

function eCard(NombrePersona, Angle, PosX, PosY, FSize, Fuente, Logo, LogoX, LogoY){
 $("#previo").css({"background-image":"url(ecard.php?nombrepersona=" + NombrePersona + "&angle=" + Angle + "&posx=" + PosX + "&posy=" + PosY + "&fsize=" + FSize + "&fuente=" + Fuente + "&logo=" + Logo + "&logox=" + LogoX + "&logoy=" + LogoY + ")", "background-repeat":"no-repeat", "background-size":"cover", "-webkit-background-size":"cover"})
}
