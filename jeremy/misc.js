//miscellaneous
function transition(){
    let screen = document.getElementById("transition")
    let css = window.getComputedStyle(screen)
    let opacity = css.opacity
    screen.style.zIndex = 1
    if(opacity < 1){
        screen.style.opacity = parseFloat(opacity) + 0.01
    }
    else{
        clearInterval(transtimer)
        //transtimer = setInterval(transition2, 10)
    }
}
function transition2(){
    let screen = document.getElementById("transition")
    let css = window.getComputedStyle(screen)
    let opacity = parseFloat(css.opacity)
    if(opacity > 0){
        screen.style.opacity = opacity - 0.01
    }
    else{
        screen.style.zIndex = -1
        clearInterval(transtimer)
    }
} 