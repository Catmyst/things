//room1 bed

function openbed(){
transtimer = setInterval(transition, 10)
let inv = document.getElementById('inventory')
inv.style.zIndex = -1
let slot1 = document.getElementById('slot1')
let screen = document.getElementById('transition')
screen.innerHTML = '<span>You throughly searched the bed, looked at every nook and crannies inside the disgusting bed, but to no avail . Weirdly enough, <span style="color:red;">You feel something weird sneaking into your backpack.</span></span>'
setTimeout(function(){
    transtimer = setInterval(transition2,10)
    let img = document.createElement('img')
    img.src='display/inventory/diary/diary.png'
    img.id='diary'
    img.onclick= function(){opendiary()}
    slot1.appendChild(img)
    inv.style.zIndex = 1
    document.getElementById('bedinput').onclick=''
}, 1010)//8000
}