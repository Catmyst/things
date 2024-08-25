//room 1 mirror
function openmirror(){
    transtimer=setInterval(transition,10)
    let inv = document.getElementById('inventory')
    inv.style.zIndex = -1
    let screen = document.getElementById('transition')
    let slot3 = document.getElementById('slot3')
    screen.innerHTML = '<span>y u mad bro</span></span>'
    setTimeout(function(){
    transtimer = setInterval(transition2,10)
    let img = document.createElement('img')
    img.src='display/inventory/fire/fire.png'
    img.id='fire'
    img.className="items"
    img.onclick= function(){hold(fire)}
    slot3.appendChild(img)
    inv.style.zIndex = 1
    document.getElementById('mirrorinput').onclick=''
}, 2000)//8000
}