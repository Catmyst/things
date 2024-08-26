//room1 puzzle box
let finish = false;
function openpuzzlebox(){
    puzzletemplate('puzzlebox')
    let numbersarray=[]
    for(let i = 1; i<=15; i++){
        let numbers = "number" + i.toString() 
        numbers = document.createElement('div')
        numbers.classList= 'numbers'
        numbers.onclick= function(){
            shift(i)}
        numbers.id= i
        numbers.textContent= i
        numbersarray.push(numbers)
    }
    let correctorder;
    let empty = document.createElement('div')
    empty.id='empty'
    empty.className='empty'
    if(finish == false){
        //correctorder= [3, 0, 12, 6, 10, 8, 9, 1, 11, 5, 13, 14, 2, 4, 7]
        correctorder= [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14] 
    }
    else if(finish == true){
    correctorder= [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14]
    empty.textContent='the chest lock is \"1234\"'
    }
    for(let i=0; i<15; i++){
        puzzlespace.appendChild(numbersarray[correctorder[i]])
    }
    puzzlespace.appendChild(empty)
}
function closepuzzlebox(){
    closepuzzle()
    let input = document.getElementById('puzzleboxinput')
    input.onclick=openpuzzlebox
}

function shift(n){
    if (!finish){
    let space = document.getElementById("empty")
    let number = document.getElementById(n)
    let numbers = document.getElementsByClassName("numbers")
    let empty = document.getElementById("empty")
    let puzzlespace = number.parentNode
    let emptyindex = Array.prototype.indexOf.call(puzzlespace.children, empty);
    let numberindex = Array.prototype.indexOf.call(puzzlespace.children, number);
    let range = Math.abs(emptyindex - numberindex)
    if(range === 1){
    if(emptyindex > numberindex){
        puzzlespace.insertBefore(space,number)
        }
    else if(numberindex > emptyindex){
        puzzlespace.insertBefore(number,space)
        }
    }
    else if (range === 4){
        let beforenum = numbers[numberindex]
        let beforespace = numbers[emptyindex -1]
            puzzlespace.insertBefore(space, beforenum)
            puzzlespace.insertBefore(number, beforespace.nextSibling)                 
    }
    else {
        console.log("invalid move\n", "empty index:",emptyindex, "number index:", numberindex, "range:",range)
    }
        let puzzlespacediv = document.getElementById("puzzlespace")
        let puzzlespacechild = Array.from(puzzlespacediv.children)
        let correctarray = []
        for (let i=1; i<= 15; i++){
            correctarray.push(document.getElementById(i.toString()))
        }
        correctarray.push(document.getElementById("empty"))
        if(puzzlespacechild.every((element, index) => element === correctarray[index])){
            empty.innerHTML= "the chest lock is \"1234\" "
            finish = true
            console.log("1")
        }
}
else if(finish){
console.log("puzzle is done!")
}

}