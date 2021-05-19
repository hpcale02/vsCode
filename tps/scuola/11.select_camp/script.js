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

    if(verifica)
        alert("data inviati corretamente!");
}