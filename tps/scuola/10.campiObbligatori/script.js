function verifica(){

    let verificata = true;
	let dataMese;

    if(document.getElementById("nome").value == "")
    {
        alert("il nome è obbligatorio!");
        verifica = false;
    }

    if(document.getElementById("cognome").value == "")
    {
        alert("il cognome è obbligatorio!");
        verifica = false;
    }

    if(document.getElementById("dataPar").value == "" || document.getElementById("mesePar").value == "" || document.getElementById("annoPar").value == "")
    {
        alert("la data di partenza è obbligatorio!");
        verifica = false;
    }

    if(document.getElementById("dataRit").value == "" || document.getElementById("meseRit").value == "" || document.getElementById("annoRit").value == "")
    {
        alert("la data di ritrno è obbligatorio!");
        verifica = false;
    }


	//1 < data < 31
	if(document.getElementById("dataPar").value < 1 || document.getElementById("dataPar").value > 31 )
	{
		alert("data di partenza inserita non valida!")
		verifica = false;
	}

	if(document.getElementById("dataRit").value < 1 || document.getElementById("dataRit").value > 31 )
	{
		alert("data di ritorno inserita non valida!")
		verifica = false;
	}

	//1 < mese < 12
	if(document.getElementById("mesePar").value < 1 || document.getElementById("mesePar").value > 31 )
	{
		alert("mese di partenza inserita non valida!")
		verifica = false;
	}

	if(document.getElementById("meseRit").value < 1 || document.getElementById("meseRit").value > 12 )
	{
		alert("mese di ritorno inserita non valida!")
		verifica = false;
	}

	if(document.getElementById("mesePar").value > document.getElementById("meseRit").value)
	{
		alert("mese di ritorno non può essere inferiuore a quella di patenza!")
		verifica = false;
	}
	else if(document.getElementById("dataPar").value > document.getElementById("dataRit").value)
	{
		alert("giorno di ritorno non può essere inferiuore a quella di patenza!")
		verifica = false;
	}

    if(verifica)
        alert("data inviati corretamente!");
}