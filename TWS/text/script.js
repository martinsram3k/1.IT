
const hlava = document.getElementById('hlava');

let x = parseInt(hlava.style.left) || 100;
let y = parseInt(hlava.style.top) || 100;


let speedX = 10;
let speedY = 10;

function animace() {

    const sirkaOkna = window.innerWidth;
    const vyskaOkna = window.innerHeight;
    const sirkaHlavy = hlava.offsetWidth;
    const vyskaHlavy = hlava.offsetHeight;


    x += speedX;
    y += speedY;

   
    if (x + sirkaHlavy >= sirkaOkna || x <= 0) {
        speedX *= -1;
    }

   
    if (y + vyskaHlavy >= vyskaOkna || y <= 0) {
        speedY *= -1; 
    }

   
    hlava.style.left = x + "px";
    hlava.style.top = y + "px";

    
    requestAnimationFrame(animace);
}


animace();