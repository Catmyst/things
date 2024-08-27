//room 1 wardrobe
let finishwardrobe = false;
function openwardrobe(){
    if(holdingitem =='key'){
    puzzletemplate('wardrobe')
    document.getElementById('puzzlespace').innerHTML = `
        <div class="uparrow" onclick=adjustpin('p1')></div>
        <div class="uparrow" onclick=adjustpin('p2')></div>
        <div class="uparrow" onclick=adjustpin('p3')></div>
        <div class="uparrow" onclick=adjustpin('p4')></div>
        <img src='display/rooms/room1/puzzles/wardrobe/chest.png' id='chest'>
        <div class="downarrow" onclick=adjustpin('m1')></div>
        <div class="downarrow" onclick=adjustpin('m2')></div>
        <div class="downarrow" onclick=adjustpin('m3')></div>
        <div class="downarrow" onclick=adjustpin('m4')></div>
        <div id="numbercontainer">
        <div class="number" id="num1">6</div>
        <div class="number" id="num2">9</div>
        <div class="number" id="num3">6</div>
        <div class="number" id="num4">9</div>
        </div>
        <div id='check' onclick='check()' style="color:red; font-size: 5vw;">check</div>
    `
    }
    else {
        console.log("youre not holding a key")
    }
}
function closewardrobe(){
    closepuzzle()
    let input = document.getElementById('wardrobeinput')
    input.onclick= openwardrobe
}
function check(){
    let num1 = document.getElementById('num1').innerHTML
    let num2 = document.getElementById('num2').innerHTML
    let num3 = document.getElementById('num3').innerHTML
    let num4 = document.getElementById('num4').innerHTML
    if(num1 == 8 && num2 == 0 && num3 == 0 && num4 == 8){
        closewardrobe()
        document.getElementById('slot2').style.borderColor='#343a40'
        document.getElementById('key').remove()
        document.getElementById('wardrobeinput').onclick=''
        if(finishpuzzlebox == true){
        transtimer = setInterval(transition,10)
        let inv = document.getElementById('inventory')
        inv.style.zIndex = -1
        document.getElementById('transition').innerHTML = "<span>After finishing that ridiculous puzzle box, you've finally opened the chest. thinking back, that pin sounds very <span style='color:red'>suspicious</span> to you. You've obtained... don\'t get your hopes \'lit\' up, because it\'s just an <span style='color:red'>unlit candle</span>. Who knows what it might be good for.</span>"
        setTimeout(function(){
        let slot4 = document.getElementById('slot4')
        let img = document.createElement('img')
        img.src='display/inventory/candle/unlitcandle.png'
        img.id='unlitcandle'
        img.className="items"
        img.onclick= function(){hold("unlitcandle")}
        slot4.appendChild(img)
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
       },10000)//10000
            console.log("complete legit")
        }
        else{
        transtimer = setInterval(transition,10)
        let inv = document.getElementById('inventory')
        inv.style.zIndex = -1
        document.getElementById('transition').innerHTML = "<span>wow, just, wow... 1 in 10.000 chance for this to happen. Either you completely guessed this by chance, or you are just really into that sort of <span style='color:red'>...nevermind</span>. You've obtained... don\'t get your hopes \'lit\' up, because it\'s just an <span style='color:red'>unlit candle</span>. who knows what it might be good for.</span>"
        setTimeout(function(){
        let slot4 = document.getElementById('slot4')
        let img = document.createElement('img')
        img.src='display/inventory/candle/unlitcandle.png'
        img.id='unlitcandle'
        img.className="items"
        img.onclick= function(){hold("unlitcandle")}
        slot4.appendChild(img)
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
       },12000)//12000
            console.log("complete cheat")
        }
    }
    else{
        console.log("wrong pin bozo")
    }
}
function adjustpin(type){
    console.log("1")
    let num1 = document.getElementById('num1')
    let num2 = document.getElementById('num2')
    let num3 = document.getElementById('num3')
    let num4 = document.getElementById('num4')
    switch(type){
        case 'p1':
            if(num1.innerHTML == 9){num1.innerHTML = 0}
            else{num1.innerHTML = parseInt(num1.innerHTML) + 1}
            break;
        case 'p2':
            if(num2.innerHTML == 9){num2.innerHTML = 0}
            else{num2.innerHTML = parseInt(num2.innerHTML) + 1}
            break;
        case 'p3':
            if(num3.innerHTML == 9){num3.innerHTML = 0}
            else{num3.innerHTML = parseInt(num3.innerHTML) + 1}
            break;
        case 'p4':
            if(num4.innerHTML == 9){num4.innerHTML = 0}
            else{num4.innerHTML = parseInt(num4.innerHTML) + 1}
            break;
        case 'm1':
            if(num1.innerHTML == 0){num1.innerHTML = 9}
            else{num1.innerHTML = parseInt(num1.innerHTML) - 1}
            break;
        case 'm2':
            if(num2.innerHTML == 0){num2.innerHTML = 9}
            else{num2.innerHTML = parseInt(num2.innerHTML) - 1}
            break;
        case 'm3':
            if(num3.innerHTML == 0){num3.innerHTML = 9}
            else{num3.innerHTML = parseInt(num3.innerHTML) - 1}
            break;
        case 'm4':
            if(num4.innerHTML == 0){num4.innerHTML = 9}
            else{num4.innerHTML = parseInt(num4.innerHTML) - 1}
            break;
    }  
}