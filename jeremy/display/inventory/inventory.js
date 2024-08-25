//holdable items
let holdingitem= '';
function hold(item){
    let slotelements = document.getElementsByClassName('slots')
    switch(item){
        case "key":
            if(holdingitem !='key'){
                for(let i=0; i<17; i++){
                    slotelements[i].style.borderColor='#343a40'
            }   
                slotelements[1].style.borderColor='white'
                console.log("you are now holding the key")
                holdingitem = 'key'
            }
            else if(holdingitem=='key'){
                document.getElementById('slot2').style.borderColor='#343a40'
                holdingitem=''
                console.log("you are no longer holding an item")
            }
            break;
        case "fire":
            if(holdingitem !='fire'){
                for(let i=0; i<17; i++){
                        slotelements[i].style.borderColor='#343a40'
            }
                slotelements[2].style.borderColor='white'
                console.log("you are now holding the fire")
                holdingitem = 'fire'
                
            }
            else if(holdingitem == 'fire'){
                document.getElementById('slot3').style.borderColor='#343a40'
                holdingitem=''
                console.log("you are no longer holding an item")
            }
            break;
    }
}

