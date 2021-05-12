function lati(){
    let lato1, lato2, lato3;

    lato1 = parseInt(prompt("inserisci la misura del 1° lato:"));
    lato2 = parseInt(prompt("inserisci la misura del 2° lato:"));
    lato3 = parseInt(prompt("inserisci la misura del 3° lato:"));

    if(lato1 == lato2 && lato2 == lato3)
        alert("il triangolo è equilaero");
    else if(lato1 != lato2 && lato1 != lato3 && lato2 != lato3)
        alert("il triangolo è scaleno");
    else
        alert("il triangolo è isoscele");
}

function angoli(){
    let angolo1, angolo2, angolo3;

    angolo1 = parseInt(prompt("inserisci la misura del 1° angolo:"));
    angolo2 = parseInt(prompt("inserisci la misura del 2° angolo:"));
    angolo3 = 180 - angolo1 - angolo2;

        if(angolo1 == angolo2 && angolo2 == angolo3)
            alert("il triangolo è equilaero");
        else if(angolo1 != angolo2 && angolo1 != angolo3 && angolo2 != angolo3)
            alert("il triangolo è scaleno");
        else
            alert("il triangolo è isoscele");

}