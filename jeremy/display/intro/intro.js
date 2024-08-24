//intro
function skipintro(){
    document.getElementById("maintitle").remove();
    ui()
    room(1)
}
function playintro(){
    transtimer = setInterval(transition, 10) //remove
    setTimeout(function(){
        transtimer = setInterval(transition2, 10)
        document.getElementById("maintitle").remove();
        intro()
    },1010) //1010
    function intro(){
        var intro = document.createElement("div")
        intro.classList="fullscreen"
        intro.style.backgroundImage = "url(display/intro/intro.png)"
        intro.id = "intro"
        intro.textContent = "The night was just like any other, or so I thought. I had just gotten to hit the sack after a long day, you know, picking on kids at the park, stealing classmates’ lunch money and whatnot."
        intro.onclick = intro2
        document.body.appendChild(intro)
    }
    
    function intro2(){
    transtimer = setInterval(transition, 10) //remove
    setTimeout(function(){
        transtimer = setInterval(transition2, 10)
        let intro = document.getElementById("intro")
            intro.innerHTML = "Little did I know, as the clock struck midnight, the temperature dropped, and a chilling breeze swept through an eerie silence fell over the room, suddenly shifting Me to a whole nother different room entirely. If that isn't karma, I don't know what is."
            intro.onclick = closeintro
            intro.style.fontSize = "4vw"
            intro.style.backgroundImage = "url(display/intro/intro2.png)"
    },1010) //1010
            
    }
    function closeintro(){
        transtimer = setInterval(transition, 10)//remove
        setTimeout(function(){
            transtimer = setInterval(transition2, 10)
            document.getElementById("intro").remove()
            ui()
            room(1)
        },1010)//1010
        
    }
}