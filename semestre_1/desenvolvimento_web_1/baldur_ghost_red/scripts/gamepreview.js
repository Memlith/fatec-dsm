var elementoImg = document.getElementById("game-img1");

elementoImg.onmouseover = () => {
    elementoImg.src = "img/bg3gif.webp";
}

elementoImg.onmouseout = () => {
    elementoImg.style.height='cover'
    elementoImg.style.animation = 'fadeOut';
    elementoImg.style.transitionDuration = '.5s';
    elementoImg.style.transform = "scale (1)";
    setTimeout(() => {
        elementoImg.src = "img/bg3.jpeg";
    }, 250);
}
