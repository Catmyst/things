// slot 7 note
function opennote(){
    console.log("1")
    puzzletemplate('note')
    let puzzlespace = document.getElementById('puzzlespace')
    let notelog = document.createElement('span')
    notelog.id = 'notelog'
    puzzlespace.appendChild(notelog)
    notelog.innerHTML = '8y'
}
function closenote(){
    closepuzzle()
    let input = document.getElementById('note')
    input.onclick= opennote
}