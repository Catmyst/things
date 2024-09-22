// ending splits
// neutral, cheater, speedrunner, idle
function idleending(){
        document.getElementById("gamespace").remove()
        transtimer = setInterval(transition,10)
        document.getElementById("transition").innerHTML = "an hour has passed by and you have yet to do anything, you hate the mansion that much huh, well heres a farewell gift from 'the evil among us' :)"
        setTimeout(function(){
            window.location = 'https://www.youtube.com/watch?v=dQw4w9WgXcQ'
        }, 6000)
    }
function ending(){
    document.getElementById("gamespace").remove()
    transtimer = setInterval(transition,10)
    let cheats = 0
    let checks=[bedfinish, finishpuzzlebox, chanddone, toiletdone, utensilsdone]
    for(let i=0;i<checks.length;i++){
        console.log(checks[i])
        if(checks[i]== false){
            cheats += 1
        } else{ cheats -=1}
    }
    if(cheats ==5){
        //speedrunner ending
        document.getElementById("transition").innerHTML =`Whoa whoa whoa! Slow down there, buddy. Ain't no "evils among us" gonna catch you if you're trying to skip all the puzzles! You think you can just speed past everything like Dream do? That's it, I'm putting you on hold.`
        setTimeout(function(){
            window.location = 'https://www.youtube.com/watch?v=OAQGLdMGPxw'
        }, 12000)
    }
    else if(cheats > -5){
        // cheater ending
        document.getElementById("transition").innerHTML =`<span>Damn buddy, you thought you could outsmart the system, huh? Skipping a puzzle here and there? Well, guess what? The "evil among us" sees all. You skipped some puzzles that are completely impossible to solve without the clues. You may have slipped through a crack, but the real challenge is <span style="color:red;">knowing when to play fair. :)</span></span>`
        setTimeout(function(){window.location = 'https://catmyst.github.io/things/jeremy/'}, 25000)
    }
    else{
        //normal ending
        document.getElementById("transition").innerHTML =`<span>As you step outside, the cool night breeze offers a fleeting sense of freedom... but something feels off. The trees, the sky, the path ahead… all are distorted. No matter where you go, you're still here. <span style="color:red;">You were never meant to leave. :)</span></span>`
        setTimeout(function(){window.location = 'https://catmyst.github.io/things/jeremy/'}, 10000)
    }
    console.log(cheats)
}
function jumpscare(){
    
}