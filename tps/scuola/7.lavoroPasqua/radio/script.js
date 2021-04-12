var som=0;
function corretta()
{
	som=som+1;
}
function sbagliata()
{
	som=som-1;
}
function elaboraTest()
{
if(som>0)
	document.getElementById("id").innerHTML+="risposta corretta";
else
	document.getElementById("id").innerHTML+="risposta sbagliata";
}