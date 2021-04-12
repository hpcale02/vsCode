function calcolareKilometri(){
    let v = parseInt(document.f1.v.value);
    let s = 0;
    for(let t = 1; t <= 10; t++){
        s = v * t;
        document.write("distanza persorsa in " + t + " ore = " + s + " km<br>");
    }
    
}