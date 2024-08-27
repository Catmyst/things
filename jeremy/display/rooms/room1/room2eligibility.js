//room 1 eligibility check for room 2(bathroom)
function room2eligibility(){
    if (holdingitem == 'litcandle'){
        transtimer = setInterval(transition, 10)
let inv = document.getElementById('inventory')
inv.style.zIndex = -1
let slot1 = document.getElementById('slot1')
let screen = document.getElementById('transition')
screen.innerHTML = 'first room is done, the bathroom is in the middle of plumbing so you cant really accesS it right now sorrgy :D'
        holdingitem=''
        room(2)
    }
    else{
        console.log("nice try bozo")
    }
}
