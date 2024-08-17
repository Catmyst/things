let transtimer;
const gamespace = document.getElementById("gamespace")
//miscellaneous
function playbgm(){
    console.log("1")
    let mainbgm = document.getElementById("mainbgm")
    
    if(mainbgm.paused){
        mainbgm.play()
    }
    else{
        mainbgm.pause()
    }
}
function transition(){
    let screen = document.getElementById("transition")
    let css = window.getComputedStyle(screen)
    let opacity = css.opacity
    screen.style.zIndex = 1
    if(opacity < 1){
        screen.style.opacity = parseFloat(opacity) + 0.01
    }
    else{
        clearInterval(transtimer)
        transtimer = setInterval(transition2, 10)
    }
}
function transition2(){
    let screen = document.getElementById("transition")
    let css = window.getComputedStyle(screen)
    let opacity = parseFloat(css.opacity)
    if(opacity > 0){
        screen.style.opacity = opacity - 0.01
    }
    else{
        screen.style.zIndex = -1
        clearInterval(transtimer)
    }
} 
//main title
function closecredit(){
    let creditcontent = document.getElementById("creditpopupspace")
    let creditx = document.getElementById("creditx")
    creditcontent.remove()
    creditx.remove()
}
function showcredit(){
    let creditpopupspace = document.getElementById("creditpopupspace")
    let creditspace = document.getElementById("creditspace")
    let creditxspace = document.getElementById("creditxspace")

    var creditx = document.createElement("div")
    creditx.classList="centertext fivevw bg"
    creditx.id = "creditx"
    creditx.textContent = "X"
    creditx.onclick = closecredit

    var creditcontent = document.createElement('div')
    creditcontent.classList="centertext fivevw bg"
    creditcontent.id = "creditpopupspace"

    var creditTitle= document.createElement('p')
    creditTitle.classList="centertext fivevw"
    creditTitle.id="credittitle"
    creditTitle.textContent="credits"
    
    creditspace.appendChild(creditcontent)
    creditcontent.appendChild(creditTitle)
    creditxspace.appendChild(creditx)
    creditcontent.innerHTML +="design & images: CrAiyon;<br>storyTelling: Me;<br> Programming: me;<br> qualitY aSsurance Tester: me;<br>"
}
//intro
function playintro(){
    setTimeout(function(){
        let togglebgm = document.getElementById("togglebgm")
        togglebgm.onclick = playbgm
        let mainbgm = document.getElementById("mainbgm")
        mainbgm.play()
    },2000)
    let gong = document.getElementById("gong")
    gong.play()
    transtimer = setInterval(transition, 10)
    setTimeout(function(){
        document.getElementById("maintitle").remove();
        intro()
    }, 1000)
    function intro(){
        var intro = document.createElement("div")
        intro.classList="fullscreen"
        intro.style.backgroundImage = "url(assets/intro.png)"
        intro.id = "intro"
        intro.textContent = "The night was just like any other, or so I thought. I had just gotten to hit the sack after a long day, you know, picking on kids at the park, stealing classmates’ lunch money and whatnot."
        intro.onclick = intro2
        gamespace.appendChild(intro)

    }
    function intro2(){
        transtimer = setInterval(transition, 5)
        setTimeout(function(){
            let intro = document.getElementById("intro")
            intro.innerHTML = "Little did I know, as the clock struck midnight, the temperature dropped, and a chilling breeze swept through an eerie silence fell over the room, suddenly shifting Me to a whole nother different room entirely. If that isn't karma, I don't know what is."
            intro.onclick = closeintro
            intro.style.fontSize = "4vw"
            intro.style.backgroundImage = "url(assets/intro2.png)"
        }, 500)
       
    }
    function closeintro(){
        transtimer = setInterval(transition, 5)
        setTimeout(function(){
            document.getElementById("intro").remove()
            room1()
        }, 500)
        
    }
}
//rooms
function room1(){
    let room1 = document.createElement('div')
    room1.id = "room1"
    gamespace.appendChild(room1)
    console.log("1")
    //clickables

}
