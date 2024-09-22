// room 2 chand js
let chanddone = false
function openchand(){
    if(holdingitem == 'litcandle' && chanddone == false){
        transtimer = setInterval(transition, 10)
        let inv = document.getElementById('inventory')
        inv.style.zIndex = -1
    
        if(toiletdone == true){
            //no cheat
            document.getElementById('transition').innerHTML=`You light the chandelier with the candle, and the light filters through, casting an intricate pattern on the window as described in the note. Truly an amazing demonstration of physics.`
            setTimeout(function(){
                transtimer = setInterval(transition2,10)
                inv.style.zIndex = 1
            }, 10000)//10000
            console.log("no cheater")
        }
        else{
            //cheat 
            document.getElementById('transition').innerHTML=`<span>Well, well, what do we have here? a physicist in the making? In no world would someone just happen to click on the chandelier with the right item, without a clue in sight. But, hey, it worked! The chandelier shines light through its slits, creating patterns on the window just like the note said. oh wait,<span style="color:red;"> you didn't even have one :)</span></span>`
            setTimeout(function(){
                transtimer = setInterval(transition2,10)
                inv.style.zIndex = 1
            }, 2000)//11000
            console.log("cheater")
        }
        chanddone = true
    }
    else{}
}