// slot 7 note
function opennote(){
    console.log("1")
    puzzletemplate('note')
    let puzzlespace = document.getElementById('puzzlespace')
    let notelog = document.createElement('span')
    notelog.id = 'notelog'
    puzzlespace.appendChild(notelog)
    notelog.innerHTML = 'As a \"young\" man once observed, when light passes through narrow slits, it can produce interference patterns that reveal fascinating and intricate patterns. These patterns emerge due to the way light waves overlap and interact with each other, creating a visual display that showcases the remarkable principles of wave interference.'
}
function closenote(){
    closepuzzle()
    let input = document.getElementById('note')
    input.onclick= opennote
}