//room 1 eligibility check for room 2(bathroom)
function room2eligibility(){
    if (holdingitem == 'litcandle'){
        room(2)
        room1complete = true
        document.getElementById('slot4').style.borderColor='#343a40'
        holdingitem=''
    }
    else{
        console.log("nice try bozo")
    }
}
