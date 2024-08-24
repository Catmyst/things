let transtimer; //transition timer
//user interface
function ui(){
let gamespace = document.createElement('div')
gamespace.id='gamespace'
document.body.appendChild(gamespace)
inventory()
}
function inventory(){
    let inventory = document.createElement('div')
inventory.id ='inventory'
gamespace.appendChild(inventory)
for(let i=1; i<18; i++){
    let inv = document.getElementById('inventory')
    let slotid = "slot" + i.toString()
    slots = document.createElement('div')
    slots.id = slotid
    slots.className = 'slots'
    inv.appendChild(slots)
}
} 
//puzzle template
function puzzletemplate(type){
    const closepuzzlesfunctions = {
        puzzlebox: closepuzzlebox,
        diary: closediary,
        clock: closeclock,
    }
    console.log('close' + type)
    let bg = document.getElementById('room1')
    bg.style.filter= 'blur(3px)'
    let oldspace = document.getElementById('puzzlespace')
    let close = document.getElementById('x')
    if (close){
        close.remove()
    }
    if (oldspace){
    oldspace.remove()
    }
    let inv = document.getElementById('inventory')
    inv.style.zIndex = -1
    const gamespace= document.getElementById('gamespace')
    let puzzlespace= document.createElement('div')
    puzzlespace.id='puzzlespace'
    gamespace.appendChild(puzzlespace)
    let x= document.createElement('div')
    x.id='x'
    x.onclick= closepuzzlesfunctions[type]
    x.textContent='Close ' + type
    gamespace.appendChild(x)
}
function closepuzzle(){
    let bg = document.getElementById('room1')
    bg.style.filter= ''
    let inv = document.getElementById('inventory')
    inv.style.zIndex = 1
}
//ready room
function room(num){
    let oldroom = document.getElementsByClassName('room')
    let isexist = oldroom[0]
    if (isexist){
        console.log(isexist)
        isexist.remove()
    }
    let gamespace = document.getElementById('gamespace')
    let roomnum = 'room' + num.toString()
    roomnum = document.createElement('div')
    roomnum.id = "room1"
    roomnum.className ='room'
    gamespace.appendChild(roomnum)
    roompuzzles(num)
}
function roompuzzles(num){
    switch (num){
        case 1: 
        let puzzleboxinput = document.createElement('div')
        puzzleboxinput.id= "puzzleboxinput"
        puzzleboxinput.onclick = openpuzzlebox
        room1.appendChild(puzzleboxinput)
        let bedinput = document.createElement('div')
        bedinput.id ='bedinput'
        bedinput.onclick= openbed
        room1.appendChild(bedinput)
        let clockinput = document.createElement('div')
        clockinput.id="clockinput"
        clockinput.onclick= openclock
        room1.appendChild(clockinput)
        break;
    }
}
    
