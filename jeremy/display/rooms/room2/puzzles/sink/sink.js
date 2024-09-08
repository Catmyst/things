// room 2 sink js
function opensink(){
    transtimer = setInterval(transition, 10)
    let inv = document.getElementById('inventory')
    inv.style.zIndex = -1
    let screen = document.getElementById('transition')
    screen.innerHTML = '<span>You turn on the tap, but something seems to be clogging the sink....</span>'
    setTimeout(function(){
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
    }, 3000)//4000
}
function closesink(){
    closepuzzle()
    let input = document.getElementById('sinkinput')
    input.onclick=opensink
}