// room 2 chand js
function openchand(){
    puzzletemplate('chand')
    let puzzlespace = document.getElementById('puzzlespace')
    puzzlespace.innerHTML ='yes'
}
function closechand(){
    closepuzzle()
    let input = document.getElementById('chandinput')
    input.onclick=openchand
}