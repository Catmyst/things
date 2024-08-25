//room 1 clock
let clocktimer;
let clockfinish=false
let inithour= Math.floor(Math.random() * 23)
let initminute= Math.floor(Math.random() * 59)
function openclock(){

    puzzletemplate('clock')
    let puzzlespace = document.getElementById('puzzlespace')
    puzzlespace.innerHTML =`
    <div id="mainclock">
        <div style="display: flex; flex-direction: column;" id="hourspace">
            <div class="adjustup" id="increasehour" onclick=adjust('plushour')></div>
            <div class="time" id="hour"></div>
            <div class="adjustdown" id="reducehour" onclick=adjust('minhour')></div>
        </div>
        <div id="seperator">:</div>
        <div style="display: flex; flex-direction: column;" id="minutespace">
            <div class="adjustup" id="increaseminute" onclick=adjust('plusminute')></div>
            <div class="time" id="minute"></div>
            <div class="adjustdown" id="reduceminute" onclick=adjust('minminute')></div>
        </div>
        <div id="adjust" onclick="testmatch()">Adjust</div>
    </div>
`
    if (clockfinish){
        clocktimer= setInterval(finishedclock,16)//16
    } 
    else{
        document.getElementById('hour').innerHTML = 23
        document.getElementById('minute').innerHTML = 58
    /*if (inithour <=9){
        document.getElementById('hour').innerHTML = "0" + inithour 
    }else{document.getElementById('hour').innerHTML = inithour}
    if (initminute <9){
        document.getElementById('minute').innerHTML = "0" + initminute 
    }else{document.getElementById('minute').innerHTML = initminute}*/
    clocktimer= setInterval(clocktick,1000)//1000
}
}
function clocktick(){
    let minute = document.getElementById('minute')
    let hour = document.getElementById('hour')
    if(minute.innerHTML <9){
        minute.innerHTML = "0" + eval(parseInt(minute.innerHTML)+1)
    }
    else{
        minute.innerHTML = eval(parseInt(minute.innerHTML)+1)
    }
    if(minute.innerHTML > 59){
            minute.innerHTML = "00"
            if (hour.innerHTML <9){
            hour.innerHTML = "0" + eval(parseInt(hour.innerHTML)+1)
            }
            else if(hour.innerHTML >= 23){
            hour.innerHTML = "00"
            }
            else{
            hour.innerHTML = eval(parseInt(hour.innerHTML)+1)
            }
    }
}
function finishedclock(){
    document.getElementById('hour').innerHTML = Math.ceil(9 + Math.random() * 90)
    document.getElementById('minute').innerHTML = Math.ceil(9 + Math.random() * 90)
}
function closeclock(){
    closepuzzle()
    let input = document.getElementById('puzzleboxinput')
    input.onclick=openpuzzlebox
    document.getElementById("puzzlespace").remove()
    document.getElementById("x").remove()
    clearInterval(clocktimer)
}
function testmatch(){
    console.log("incorrect time")
    let hour = document.getElementById('hour')
    let minute = document.getElementById('minute')

    if(hour.innerHTML == "00" && minute.innerHTML == "00"){
        clearInterval(clocktimer)
        clockfinish=true
        closeclock()
        transtimer = setInterval(transition,10)
        let inv = document.getElementById('inventory')
        inv.style.zIndex = -1
        if(document.getElementById('diary')){document.getElementById('transition').innerHTML = '<span>After some thought and recalling the diary\'s instructions, you carefully adjust the clock to midnight. The clock chimes loudly. <span style="color:red">The clock drops a key for your effort.</span></span>'}
        else{document.getElementById('transition').innerHTML= '<span>Despite the odds, without knowing what to do, you somehow managed to complete the clock puzzle with odds of 1 in 1440. Well, there goes your luck for the year. <span style="color:red">The clock drops a key for your effort, lucky dog.</span></span>'}
        setTimeout(function(){
        let slot2 = document.getElementById('slot2')
        let img = document.createElement('img')
        img.src='display/inventory/key/key.png'
        img.id='key'
        img.className="items"
        img.onclick= function(){hold(key)}
        slot2.appendChild(img)
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
       },1100)//8000
    }
}
function adjust(type){
    switch (type){
    case 'plushour':
        minute.innerHTML = eval(parseInt(minute.innerHTML)-1)
        clocktick()
        if (hour.innerHTML <9){
            hour.innerHTML = "0" + eval(parseInt(hour.innerHTML)+1)
            }
            else if(hour.innerHTML >= 23){
            hour.innerHTML = "00"
            }
            else{
            hour.innerHTML = eval(parseInt(hour.innerHTML)+1)
            }
        break;
    case 'minhour':
        minute.innerHTML = eval(parseInt(minute.innerHTML)-1)
        clocktick()
            if(hour.innerHTML == 0o0){
            hour.innerHTML = "23"
            }
            else if (hour.innerHTML <11){
            hour.innerHTML = "0" + eval(parseInt(hour.innerHTML)-1)
            }
            else{
            hour.innerHTML = eval(parseInt(hour.innerHTML)-1)
            }
        break;
    case 'plusminute':
        clocktick()
        break;
    case 'minminute':
        minute.innerHTML = eval(parseInt(minute.innerHTML)-2)
        clocktick()
        if(minute.innerHTML == 0o0){
            adjust('minhour')
            minute.innerHTML = "59"
            }
        break;
    }
}