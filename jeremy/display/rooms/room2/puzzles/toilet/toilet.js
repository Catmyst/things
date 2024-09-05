// room 2 toilet js
function opentoilet(){
    puzzletemplate('toilet')
    let puzzlespace = document.getElementById('puzzlespace')
    puzzlespace.innerHTML ='yes'
}
function closetoilet(){
    closepuzzle()
    let input = document.getElementById('toiletinput')
    input.onclick=opentoilet
}