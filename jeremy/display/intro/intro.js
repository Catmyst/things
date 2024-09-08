//intro
function devtool(){
    document.getElementById("maintitle").remove();
    ui()
    room(2)
    unlockallslot()
}
function unlockallslot(){
    let itemslist=[
        {},
        {
            id:'diary',
            src:'display/inventory/diary/diary.png',
            onclick: function(){opendiary()}
        },
        {
            id:'key',
            src:'display/inventory/key/key.png',
            onclick: function(){hold('key')}
        },
        {
            id:'fire',
            src:'display/inventory/fire/fire.png',
            onclick: function(){hold('fire')}
        },
        {
            id:'unlitcandle',
            src:'display/inventory/candle/unlitcandle.png',
            onclick: function(){hold("unlitcandle")}
        },
        {
            id:'wrench',
            src:'display/inventory/wrench/wrench.png',
            onclick: function(){hold("wrench")}
        },
        {
            id:'plunger',
            src:'display/inventory/plunger/plunger.png',
            onclick: function(){hold("plunger")}
        },
    ]
    for(let i=1;i<=6;i++){
        let slotnumber = 'slot' + i.toString()
        let slotdiv = document.getElementById(slotnumber)
        let img = document.createElement('img')
        img.className='items'
        img.src= itemslist[i].src
        img.id= itemslist[i].id
        img.onclick= itemslist[i].onclick
        slotdiv.appendChild(img)
    }
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
            intro.innerHTML = "<span style='color:red;'>Little did I know, as the clock struck midnight, the temperature dropped, and a chilling breeze swept through an eerie silence fell over the room, suddenly shifting Me to a whole nother different room entirely. If that isn't karma, I don't know what is.</span>"
            intro.onclick = closeintro
            intro.style.fontSize = "4vw"
            intro.style.backgroundImage = "url(display/intro/intro2.png)"
    },1010) //1010
            
    }
    function closeintro(){
            setTimeout(function(){document.getElementById("intro").remove()}, 1010)
            ui()
            document.getElementById('inventory').style.opacity=0
            setTimeout(function(){document.getElementById('inventory').style.opacity=1},1010)
            room(1)
    }
}