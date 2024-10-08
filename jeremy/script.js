let transtimer; //transition timer
let idleendingtimer;//??? ending timer
//user interface
function ui(){
idleendingtimer = setTimeout(function(){idleending()}, 60000)
let gamespace = document.createElement('div')
gamespace.onclick= function(){
    console.log("idle ending canceled")
    clearTimeout(idleendingtimer)
    gamespace.onclick=''
}
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
        //room 1
        wardrobe: closewardrobe,
        puzzlebox: closepuzzlebox,
        diary: closediary,
        clock: closeclock,
        exit:closeexit,
        //room 2
        note: closenote,
        sink: closesink,
        toilet: closetoilet,
        utensils: closeutensils,
        window: closewindow

    }
    let getbg = document.getElementsByClassName("room")
    let bg = getbg[0]
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
    let getbg = document.getElementsByClassName("room")
    let bg = getbg[0]
    bg.style.filter= ''
    let inv = document.getElementById('inventory')
    inv.style.zIndex = 1
    document.getElementById("puzzlespace").remove()
    document.getElementById("x").remove()
}
//room completion bools
room1complete = false;
//ready room
function room(num){
        document.getElementById('transition').innerHTML =''
        transtimer = setInterval(transition, 10)
        let inv = document.getElementById('inventory')
        inv.style.zIndex = -1
        setTimeout(function(){
            inv.style.zIndex = 1
            transtimer = setInterval(transition2, 10)
            let oldroom = document.getElementsByClassName('room')
            let isexist = oldroom[0]
            if (isexist){
                isexist.remove()
            }
            let gamespace = document.getElementById('gamespace')
            let roomnum = 'room' + num.toString()
            roomnew= document.createElement('div')
            roomnew.id = roomnum
            roomnew.className ='room'
            gamespace.appendChild(roomnew)
            roompuzzles(num)
            },2000)
}
function roompuzzles(num){
    switch (num){
        case 1: 
        let room1 = document.getElementById('room1')
        let puzzleboxinput = document.createElement('div')
        puzzleboxinput.id= "puzzleboxinput"
        puzzleboxinput.onclick = function(){openpuzzlebox()}
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
        if(room1complete == true){
            bedinput.onclick=''
            mirrorinput.onclick=''
        }
        let exitinput = document.createElement('div')
        exitinput.id="exitinput"
        exitinput.onclick=function(){openexit()}
        room1.appendChild(exitinput)
        break;
        case 2:
        let room2 = document.getElementById("room2")
        let bedroominput = document.createElement('div')
        bedroominput.id="bedroominput"
        bedroominput.onclick=function(){room(1)}
        room2.appendChild(bedroominput)
        let chandinput = document.createElement('div')
        chandinput.id="chandinput"
        chandinput.onclick= openchand
        room2.appendChild(chandinput)
        let sinkinput = document.createElement('div')
        sinkinput.id= "sinkinput"
        sinkinput.onclick= opensink
        room2.appendChild(sinkinput)
        let toiletinput = document.createElement('div')
        toiletinput.id="toiletinput"
        toiletinput.onclick= opentoilet
        room2.appendChild(toiletinput)
        let utensilsinput = document.createElement('div')
        utensilsinput.id="utensilsinput"
        utensilsinput.onclick= openutensils
        room2.appendChild(utensilsinput)
        let windowinput = document.createElement('div')
        windowinput.id="windowinput"
        windowinput.onclick= openwindow
        room2.appendChild(windowinput)
    }
}
