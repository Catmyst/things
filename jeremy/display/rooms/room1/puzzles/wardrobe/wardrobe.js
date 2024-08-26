//room 1 wardrobe
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
        <div class="number" id="num1">0</div>
        <div class="number" id="num2">0</div>
        <div class="number" id="num3">0</div>
        <div class="number" id="num4">0</div>
        </div>
        <div id='check' onclick='check' style="color:red; font-size: 5vw;">check</div>
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
    console.log("1")
}
function adjustpin(type){
    switch(type){
        case 'p1':
        console.log(type)
        break;
        case 'p2':
        console.log(type)
        break;
        case 'p3':
        console.log(type)
        break;
        case 'p4':
        console.log(type)
        break;
        case 'm1':
        console.log(type)
        break;
        case 'm2':
        console.log(type)
        break;
        case 'm3':
        console.log(type)
        break;
        case 'm4':
        console.log(type)
        break;
        default: console.log("code wrong bozo")
    }
    
}