// room 2 window js
function openwindow(){
    puzzletemplate('window')
    let puzzlespace = document.getElementById('puzzlespace')
    if(chanddone == false){
        puzzlespace.innerHTML =
        `
        <div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div>
        <div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div>
        <div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div>
        <div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div>
        <div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div>
        <div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div>
        `
    }
    else if(chanddone == true){
        puzzlespace.innerHTML =
        `
        <div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div>
        <div class="windowblank"></div><div class="windowred"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowred"></div><div class="windowblank"></div>
        <div class="windowblank"></div><div class="windowred"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowred"></div><div class="windowblank"></div>
        <div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div>
        <div class="windowred"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowblank"></div><div class="windowred"></div>
        <div class="windowblank"></div><div class="windowred"></div><div class="windowred"></div><div class="windowred"></div><div class="windowred"></div><div class="windowblank"></div>
        `
    }
}
function closewindow(){
    closepuzzle()
    let input = document.getElementById('windowinput')
    input.onclick=openwindow
}