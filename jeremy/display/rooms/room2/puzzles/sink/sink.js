// room 2 sink js
let sinkdone = false
function opensink(){
    console.log(sinkdone)
    if(holdingitem == 'wrench' && sinkdone == false){
        puzzletemplate('window')
        let puzzlespace = document.getElementById('puzzlespace')
        puzzlespace.style.gap = 0
        puzzlespace.innerHTML =
        `
        <div style="transform:rotate(270deg)" id="pipe11" onclick="rotatepipe('11')"class="pipediv"></div><div style="transform:rotate(90deg)" id="pipe12" onclick="rotatepipe('12')" class="pipediv"></div><div style="transform: rotate(0deg)"id="pipe13" onclick="rotatepipe('13')" class="pipediv"></div>
        <div style="transform:rotate(90deg)" id="pipe21" onclick="rotatepipe('21')"class="pipediv"></div><div style="transform:rotate(90deg)" id="pipe22" onclick="rotatepipe('22')" class="pipediv"></div><div style="transform:rotate(90deg)" id="pipe23" onclick="rotatepipe('23')" class="pipediv"></div>
        <div style="transform:rotate(180deg)" id="pipe31" onclick="rotatepipe('31')"class="pipediv"></div><div style="transform:rotate(180deg)" id="pipe32" onclick="rotatepipe('32')" class="pipediv"></div><div style="transform:rotate(90deg)" id="pipe33" onclick="rotatepipe('33')" class="pipediv"></div>
        <div style="z-index: 5;font-size:5vh; display: block; margin: 0 auto; color:red; border: 2px solid #343a40; "onclick="checkpipe()">adjust</div>
        `
    }
    else if(sinkdone == false){transtimer = setInterval(transition, 10)
    let inv = document.getElementById('inventory')
    inv.style.zIndex = -1
    let screen = document.getElementById('transition')
    screen.innerHTML = '<span>You turn on the tap, but something seems to be clogging it, perhaps tampering with the pipe might do something....</span>'
    setTimeout(function(){
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
    }, 4000)//4000
} else{}
}
let piperotations={'11': 270, '12': 90, '13': 0, '21':90, '22':90,'23':90,'31':180, '32': 180, '33':90}
function rotatepipe(pipenum){
    let pipe = document.getElementById(`pipe${pipenum}`)
    let css = window.getComputedStyle(pipe)
    let rotation = piperotations[pipenum]||0;
    let newrotation = (rotation + 90) % 360
    pipe.style.transform = `rotate(${newrotation}deg)`
    piperotations[pipenum] = newrotation
    console.log(css.transform)
}
function checkpipe(){
    let correctpipes=0
    let pipenumbers =[11,12,13,21,22,23,31,32,33]
    for(let i=0;i<pipenumbers.length; i++){
        let pipepos = window.getComputedStyle(document.getElementById(`pipe${pipenumbers[i]}`)).transform
        console.log(pipepos)
        if(pipepos.toString() == `matrix(1, 0, 0, 1, 0, 0)`){
            correctpipes += 1

        }
        else {
            correctpipes = 0
            break;
        }
    }
    transtimer = setInterval(transition, 10)
    let inv = document.getElementById('inventory')
    setTimeout(function(){
        transtimer = setInterval(transition2,10)
        inv.style.zIndex = 1
    }, 8000)//8000
    if (correctpipes==9){
        let img = document.createElement('img')
        img.src='display/inventory/masterkey/masterkey.png'
        img.id='masterkey'
        img.className="items"
        img.onclick= function(){hold('masterkey')}
        slot8.appendChild(img)
        sinkdone=true
        document.getElementById("transition").innerHTML = `As you suspected, something was clogging the sink. With the water now flowing freely, you fish out a suspicious key from deep within the pipes. Perhaps this will unlock more than just the mystery of the sink, possibly a way out of this hellhole?`
    } else{document.getElementById("transition").innerHTML = `Your suspicions were right, something is clogging the sink. But despite your efforts, the water still refuses to drain. Instead, it bursts out, drenching your face full of filths. Maybe give it another shot after bathing? you are in the "bath"room, after all.`}
    console.log(correctpipes)
    closesink()
    inv.style.zIndex = -1
}
function closesink(){
    puzzlespace.style.gap = 1%
    closepuzzle()
    let input = document.getElementById('sinkinput')
    input.onclick=opensink
}