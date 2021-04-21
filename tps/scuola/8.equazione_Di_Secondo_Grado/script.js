function equazioneDiSecondoGrado(){
    let a,b,c;
    let delta;
    let x1, x2;

    a = parseInt(prompt("inserisci a"));
    b = parseInt(prompt("inserisci b"));
    c = parseInt(prompt("inserisci c"));
    
    delta = b * b - 4 * a * c;
    if(delta > 0){
        x1 = (-(b) + Math.sqrt(delta)) / 2*a;
        x2 = (-(b) - Math.sqrt(delta)) / 2*a;

        alert("x1 = " + x1 + " x2 = " + x2);
    }
    else
    {
        alert("non esiste x per quale l'equazione sia varificata");
    }
}