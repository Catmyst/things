let clock;
clock = setInterval(timer, 1000)
let alert = document.getElementById("alert")
let gamescreen= document.getElementById("gamescreen")
let time= document.getElementById("time")
let score = document.getElementById("score")

function timer() {
   time.innerHTML = eval(parseInt(time.innerHTML) - 1) +" "
   if (time.innerHTML == 0){
    clearInterval(clock)
    alert.innerHTML = "game over!"
    obj1.remove()
    obj2.remove()
    obj3.remove()
   }
}
function retry(){
    time.innerHTML = 30 + " "
    score.innerHTML = 0 + " "
    target1()
    target2()
    target3()
    clock = setInterval(timer, 1000)
}

function target1(){
        
            let obj=document.getElementById("obj1")
            let objcss=window.getComputedStyle(obj)
            let rngx = Math.ceil(80 * Math.random())
            let rngy = Math.ceil(10 + 70 * Math.random())
            obj.remove()
            var newobj = document.createElement("div")
            newobj.style.left = rngx + "vw"
            newobj.style.top = rngy + "vh"
            newobj.id="obj1"
            newobj.className="circle obj1"
            newobj.onclick= target1
            newobj.textContent="1"
            gamescreen.appendChild(newobj)
            score.innerHTML = eval(parseInt(score.innerHTML) + 1 ) + " "
    }
    function target2(){
     
        let obj=document.getElementById("obj2")
        let objcss=window.getComputedStyle(obj)
        let rngx = Math.ceil(80 * Math.random())
        let rngy = Math.ceil(10 + 70 * Math.random())
        obj.remove()
        var newobj = document.createElement("div")
        newobj.style.left = rngx + "vw"
        newobj.style.top = rngy + "vh"
        newobj.id="obj2"
        newobj.className="circle obj2"
        newobj.onclick= target2
        newobj.textContent="2"
        gamescreen.appendChild(newobj)
        score.innerHTML = eval(parseInt(score.innerHTML) + 1 ) + " "
}
function target3(){

    let obj=document.getElementById("obj3")
    let objcss=window.getComputedStyle(obj)
    let rngx = Math.ceil(80 * Math.random())
    let rngy = Math.ceil(10 + 70 * Math.random())
    obj.remove()
    var newobj = document.createElement("div")
    newobj.style.left = rngx + "vw"
    newobj.style.top = rngy + "vh"
    newobj.id="obj3"
    newobj.className="circle obj3"
    newobj.onclick= target3
    newobj.textContent="3"
    gamescreen.appendChild(newobj)
    score.innerHTML = eval(parseInt(score.innerHTML) + 1 ) + " "
}
