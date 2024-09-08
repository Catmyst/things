// room 2 utensils js
let countertopuses = 0
let utensilsdone = false
function openutensils(){
    if (utensilsdone == false){
    transtimer = setInterval(transition, 10)
    let inv = document.getElementById('inventory')
    inv.style.zIndex = -1
    let screen = document.getElementById('transition')
    if(countertopuses == 0){
    screen.innerHTML = '<span>You took a conviniently placed wrench from the countertop. I mean, who is gonna stop you from doing that</span>'
    countertopuses +=1
    setTimeout(function(){
        let img = document.createElement('img')
        img.src='display/inventory/wrench/wrench.png'
        img.id='wrench'
        img.className="items"
        img.onclick= function(){hold("wrench")}
        document.getElementById('slot5').appendChild(img)
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
    }, 3000)//4000
    }
    else if(countertopuses == 1){
        screen.innerHTML = '<span>You also took a conviniently placed plunger from the countertop. What a steal!</span>'
        countertopuses +=1
    setTimeout(function(){
        let img = document.createElement('img')
        img.src='display/inventory/plunger/plunger.png'
        img.id='plunger'
        img.className="items"
        img.onclick= function(){hold("plunger")}
        document.getElementById('slot6').appendChild(img)
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
    }, 3000)//4000
    }
    else if(countertopuses == 2){
        screen.innerHTML = '<span>You took too many utensils too fast that all of it spilled on the floor, rendering them useless.</span>'
        utensilsdone = true
    setTimeout(function(){
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
    }, 3000)//4000
    }
    else{}
    }
}
function closeutensils(){
    closepuzzle()
    let input = document.getElementById('utensilsinput')
    input.onclick=openutensils
}