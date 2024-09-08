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
            if(holdingitem == 'unlitcandle'){
                document.getElementById('slot4').style.borderColor='#343a40'
                document.getElementById('fire').remove()
                document.getElementById('slot4').innerHTML =`<img src="display/inventory/candle/litcandle.png" id="litcandle" class="items">`
                document.getElementById('litcandle').onclick= function(){hold('litcandle')}
                holdingitem=''
                console.log("you combined the fire with an unlit candle, creating a lit candle")
            }
            else if(holdingitem !='fire'){
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
        case "unlitcandle":
        if(holdingitem == 'fire'){
                document.getElementById('slot3').style.borderColor='#343a40'
                document.getElementById('fire').remove()
                document.getElementById('slot4').innerHTML =`<img src="display/inventory/candle/litcandle.png" id="litcandle" class="items">`
                document.getElementById('litcandle').onclick=function(){hold('litcandle')}
                holdingitem=''
                console.log("you combined the unlit canlde with a fire, creating a lit candle")
            }
        else if(holdingitem !='unlitcandle'){
            for(let i=0; i<17; i++){
                slotelements[i].style.borderColor='#343a40'
        }   
            slotelements[3].style.borderColor='white'
            console.log("you are now holding the unlit candle")
            holdingitem = 'unlitcandle'
        }
        else if(holdingitem=='unlitcandle'){
            document.getElementById('slot4').style.borderColor='#343a40'
            holdingitem=''
            console.log("you are no longer holding an item")
        }
        break;
        case 'litcandle':
            if(holdingitem !='litcandle'){
                for(let i=0; i<17; i++){
                    slotelements[i].style.borderColor='#343a40'
            }   
                slotelements[3].style.borderColor='white'
                console.log("you are now holding the lit candle")
                holdingitem = 'litcandle'
            }
            else if(holdingitem=='litcandle'){
                document.getElementById('slot4').style.borderColor='#343a40'
                holdingitem=''
                console.log("you are no longer holding an item")
            }
            break;
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
         case "wrench":
            if(holdingitem !='wrench'){
                for(let i=0; i<17; i++){
                    slotelements[i].style.borderColor='#343a40'
            }   
                slotelements[4].style.borderColor='white'
                console.log("you are now holding the wrench")
                holdingitem = 'wrench'
            }
            else if(holdingitem=='wrench'){
                document.getElementById('slot5').style.borderColor='#343a40'
                holdingitem=''
                console.log("you are no longer holding an item")
            }
            break;
        case "plunger":
            if(holdingitem !='plunger'){
                for(let i=0; i<17; i++){
                    slotelements[i].style.borderColor='#343a40'
            }   
                slotelements[5].style.borderColor='white'
                console.log("you are now holding the plunger")
                holdingitem = 'plunger'
            }
            else if(holdingitem=='plunger'){
                document.getElementById('slot6').style.borderColor='#343a40'
                holdingitem=''
                console.log("you are no longer holding an item")
            }
            break;
    }
}

