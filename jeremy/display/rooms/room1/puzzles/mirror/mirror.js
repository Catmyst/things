//room 1 mirror
function openmirror(){
    transtimer=setInterval(transition,10)
    let inv = document.getElementById('inventory')
    inv.style.zIndex = -1
    let screen = document.getElementById('transition')
    let slot3 = document.getElementById('slot3')
    screen.innerHTML = '<span>Maybe the mirror\'s playing tricks on you, or maybe you\'re just going bananas, but you swore you saw the silhouette of a monkey earlier. </span>'
    setTimeout(function(){
        screen.innerHTML=''
        setTimeout(function(){
            screen.innerHTML = '<span>feeling angered after being mega trolled, the flames of your anger appeared in your inventory.</span>'
            setTimeout(function(){
                transtimer = setInterval(transition2,10)
                let img = document.createElement('img')
                img.src='display/inventory/fire/fire.png'
                img.id='fire'
                img.className="items"
                img.onclick= function(){hold("fire")}
                slot3.appendChild(img)
                inv.style.zIndex = 1
                document.getElementById('mirrorinput').onclick=''
            },1100)//3000 must atleast 1100
        },0)//3000
    },0)//5000
}