let som=0
function corretta()
{
	som+=1
}
function sbagliata()
{
	som-=1
}
function elaboraTest()
{
if(som>0)
	document.getElementById("testo").innerHTML+="risposta corretta";
else
	document.getElementById("testo").innerHTML+="risposta sbagliata";
}