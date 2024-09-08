// room 2 toilet js
let toiletgametimer;
let toiletdone = false;
function opentoilet(){
    console.log(document.getElementById("inventory"))
    if(toiletdone == false){
    if(holdingitem =='plunger'){
    puzzletemplate('toilet')
    let puzzlespace = document.getElementById('puzzlespace')
    puzzlespace.style.backgroundImage = 'url(display/rooms/room2/puzzles/toilet/toilet.jpeg)'
    puzzlespace.style.backgroundPosition = 'center'
    puzzlespace.style.backgroundRepeat = 'no-repeat'; 
    puzzlespace.style.overflow = 'hidden';
    puzzlespace.style.backgroundSize= '120%';
    toiletgametimer = setInterval(toiletgame, 10)
    }
    else{
    transtimer = setInterval(transition,10)
    document.getElementById('inventory').style.zIndex = -1
    document.getElementById('transition').innerHTML = '<span>You open the toilet lid and see water spilling over onto the disgustingly carpeted floor. Perhaps something is clogging the toilet.</span>'
    setTimeout(function(){
        transtimer = setInterval(transition2,10)
        document.getElementById('inventory').style.zIndex = 1
    }, 2000)//8000
    }
} else{}
}
function closetoilet(){
    clearInterval(toiletgametimer)
    closepuzzle()
    let input = document.getElementById('toiletinput')
    input.onclick=opentoilet
}
function toiletgame(){

    let items = document.getElementsByClassName('toiletitem')
    for(let i=0; i<items.length; i++){
        let top = window.getComputedStyle(items[i]).getPropertyValue('top')
        top = parseFloat(top)
        let newtop = top + window.innerHeight/500
        items[i].style.top = `${newtop}px`
        if(newtop > window.innerHeight){
            items[i].remove()
        }
    }
    let rng = Math.ceil(Math.random() * 50)
    if(rng == 50){
        let rng2 = Math.ceil(Math.random() * 4)
        if(rng2 == 4){
            let leftrng = Math.ceil(Math.random()* 80) + 'vh'
            let note = document.createElement('div')
            note.className='toiletitem'
            note.style.left = leftrng
            note.style.backgroundImage = 'url(display/rooms/room2/puzzles/toilet/note.png)'
            note.onclick=function(){noteclick()}
            document.getElementById('puzzlespace').appendChild(note)
        }
        else{
            let leftrng = Math.ceil(Math.random()* 80) + 'vh'
            let poop = document.createElement('div')
            let poopid = 'poop' + items.length
            poop.id = poopid
            poop.className='toiletitem'
            poop.style.left = leftrng
            poop.style.backgroundImage = 'url(display/rooms/room2/puzzles/toilet/poop.png)'
            poop.onclick= function(){document.getElementById(poopid).remove()}
            document.getElementById('puzzlespace').appendChild(poop)
        }
    }
}
function noteclick(){
    transtimer = setInterval(transition,10)
    document.getElementById('transition').innerHTML = '<span>As you were cleaning the mess, you managed to snag a note from the bottom of the toilet.</span>'
    setTimeout(function(){
        let img = document.createElement('img')
        img.src='display/inventory/note/note.png'
        img.id='note'
        img.className="items"
        document.getElementById('slot7').appendChild(img)
        document.getElementById('note').addEventListener('click',function(){opennote(); console.log("asdfasoihdnviaebsivnbauisbvibasidbv cuidasb uiv bdsiubv oiSb")})
        transtimer = setInterval(transition2,10)
        document.getElementById('inventory').style.zIndex = 1
    }, 2000)//8000
    toiletdone = true
    closetoilet()
    document.getElementById('inventory').style.zIndex = -1

}