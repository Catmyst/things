// room 2 utensils js
function openutensils(){
    puzzletemplate('utensils')
    let puzzlespace = document.getElementById('puzzlespace')
    puzzlespace.innerHTML ='yes'
}
function closeutensils(){
    closepuzzle()
    let input = document.getElementById('utensilsinput')
    input.onclick=openutensils
}