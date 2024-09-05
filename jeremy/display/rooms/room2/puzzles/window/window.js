// room 2 window js
function openwindow(){
    puzzletemplate('window')
    let puzzlespace = document.getElementById('puzzlespace')
    puzzlespace.innerHTML ='yes'
}
function closewindow(){
    closepuzzle()
    let input = document.getElementById('windowinput')
    input.onclick=openwindow
}