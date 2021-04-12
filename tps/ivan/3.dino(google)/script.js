var character = document.getElementById("character");

var spammBlock = setInterval(function() {
    var random = Math.floor(Math.random() * 2);
    if (random == 1) document.getElementById("add").innerHTML =  `<div id="block1"></div>`;
    else document.getElementById("add").innerHTML =  `<div id="block2"></div>`;
    block = document.getElementById("add");
}, 1000);

document.addEventListener("keydown", event => {
    switch (event.keyCode){
        case 38:
            character.classList.add("animate");
        break;
        case 40:
            character.classList.add("animate_down");
        break;
    }
    
    setTimeout(function(){
        character.classList.remove("animate");
        character.classList.remove("animate_down");
    }, 500);
});

var checkDead = setInterval(function() {
    var characterTop = parseInt(window.getComputedStyle(character).getPropertyValue("top"));
/*    var characterBottom = parseInt(window.getComputedStyle(block).getPropertyPriority(""));*/
    var blockLeft = parseInt(window.getComputedStyle(block).getPropertyValue("left"));
    var blockLeft1 = parseInt(window.getComputedStyle(block1).getPropertyValue("left"));
    if ((blockLeft < 20 || blockLeft1 < 40) && (blockLeft || blockLeft1> 0) && characterTop >= 130){
        block.style.animation = "none";
        block.style.display = "none";
        window.alert("u lose.");
        location.reload();
    }
}, 10);