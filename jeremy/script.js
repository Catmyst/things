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
    slots.style.borderColor='#343a40'
    inv.appendChild(slots)
}
} 
//puzzle template
function puzzletemplate(type){
    const closepuzzlesfunctions = {
        wardrobe: closewardrobe,
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
    document.getElementById("puzzlespace").remove()
    document.getElementById("x").remove()
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
    roomnew= document.createElement('div')
    roomnew.id = roomnum
    roomnew.className ='room'
    gamespace.appendChild(roomnew)
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
        let mirrorinput = document.createElement('div')
        mirrorinput.id="mirrorinput"
        mirrorinput.onclick= openmirror
        room1.appendChild(mirrorinput)
        let wardrobeinput = document.createElement('div')
        wardrobeinput.id="wardrobeinput"
        wardrobeinput.onclick= openwardrobe
        room1.appendChild(wardrobeinput)
        let bathroominput = document.createElement('div')
        bathroominput.id="bathroominput"
        bathroominput.onclick= function(){room2eligibility()}
        room1.appendChild(bathroominput)
        break;
    }
}
