// room 2 sink js
function opensink(){
    puzzletemplate('sink')
    let puzzlespace = document.getElementById('puzzlespace')
    puzzlespace.innerHTML ='yes'
}
function closesink(){
    closepuzzle()
    let input = document.getElementById('sinkinput')
    input.onclick=opensink
}