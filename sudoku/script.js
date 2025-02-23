let filledSquare = []
let bestRemovedSquareLengths = [];
let bestRemovedSquareBoard = [];
let bestRemovedSquareIDs = [];
let bestRemovedSquareValues = []; 
let removedSquareIDs = [];
let removedSquareValues = []; 
let amountOfHalts = 0;
function inputCheck(row, column){
    var chosenSquareNumber = "n" + row + column;
    var chosenSquare = document.getElementById(chosenSquareNumber);

    if(chosenSquare.value == ""){};

    if(chosenSquare.value.indexOf("+") > -1 ||  chosenSquare.value.indexOf("-") > -1||  chosenSquare.value.indexOf(".") > -1 ||  chosenSquare.value.indexOf(",") > -1){
        console.log("number illegal")
        chosenSquare.value = ""
    } else if (chosenSquare.value < 1 || chosenSquare.value > 9){
        console.log("number illegal")
        chosenSquare.value = ""
    } else("number valid");
}
let checkValidityInterval;
function checkValidity(){
    let amountOfBlankSquares = 0;
    let isValid = true;
    let squares = document.getElementsByClassName("square");
    for (let i = 0; i < squares.length; i++){
        squares[i].style.color = "black"
    }
    for (let row = 1; row <= 9; row++){
        for (let column = 1; column <=9; column++){
            if(document.getElementById(`n${row}${column}`).value == ``){
                amountOfBlankSquares += 1;
            }
            // check row
            for (let k = column-1; k >= 1; k--){
                let squareNumber = "n" + row + column;
                let square = document.getElementById(squareNumber);
                let kSquareNumber = "n" + row + k;
                let kSquare = document.getElementById(kSquareNumber);
                if(square.value == kSquare.value && square.value !=``){
                    isValid = false;
                    square.style.color = "red"
                    kSquare.style.color = "red"
                } else{};
            }
            // check column
            for (let l = column-1; l >=1; l--){
                let squareNumber = "n" + column + row;
                let square = document.getElementById(squareNumber);
                let lSquareNumber = "n" + l + row;
                let lSquare = document.getElementById(lSquareNumber);
                if((square.value == lSquare.value) && square.value !=``){
                    isValid = false;
                    square.style.color = "red"
                    lSquare.style.color = "red"
                } else{};
            }
            // check square
            for (let m = 0; m <= 2; m++){
                let squareNumber = "n" + row + column;
                let square = document.getElementById(squareNumber);
                for (let n = 0; n <= 2; n++){
                    let startRow = Math.floor((row - 1) / 3) * 3 + 1
                    let startColumn = Math.floor((column - 1) / 3) * 3 + 1
                    let xRow = startRow + m;
                    let xColumn = startColumn + n;
                    let xNumber = "n" + xRow + xColumn;
                    let x = document.getElementById(xNumber);
                    if((row !== xRow && column !== xColumn) && square.value == x.value && square.value !=``){
                        isValid = false;
                        square.style.color = "red"
                        x.style.color = "red"
                        //console.log(`same number at box (${Math.floor(1 + (row - 1) / 3)},${Math.floor(1 + (column - 1) / 3)}) at (${row}, ${column}) & (${xRow}, ${xColumn}). `)
                    } else{};
                }
            }
        }
    }
    if(amountOfBlankSquares < 1 && isValid == true){
        clockstop();
        document.getElementById("alert").innerHTML = "You Win!"
    }
    return isValid; 
}


summonBox(); // generate board
function summonBox(){
    clockstop()
    document.getElementById("hour").innerHTML = "00";
    document.getElementById("minute").innerHTML = "00";
    document.getElementById("second").innerHTML = "00";
    document.getElementById("alert").innerHTML = "Loading Board, Please Wait..."
    setTimeout(function(){
        checkValidityInterval = setInterval(function(){
            checkValidity();
        }, 100
        )
        document.getElementById("bigSquare").innerHTML = ``;
        document.getElementById("pencilSquare").innerHTML = ``
        filledSquare = []
        bestRemovedSquareLengths = [];
        bestRemovedSquareBoard = [];
        bestRemovedSquareIDs = [];
        bestRemovedSquareValues = []; 
        removedSquareIDs = [];
        removedSquareValues = []; 
        amountOfHalts = 0;
        for (let i = 1; i <= 9; i++){
            let row = document.createElement("span");
            let rowNumber = "row" + i;
            row.className= "row";
            row.id = rowNumber;
            document.getElementById("bigSquare").appendChild(row)

            let pencilRow = document.createElement("span");
            let pencilRowNumber = "pRow" + i;
            pencilRow.className= "row";
            pencilRow.id = pencilRowNumber;
            document.getElementById("pencilSquare").appendChild(pencilRow)
            for(let j = 1; j <= 9; j++){
                let square = document.createElement("input");
                let squareNumber = "n" + i + j;
                filledSquare.push(squareNumber)
                square.className = "square";
                square.id = squareNumber;
                square.type = "number";
                square.value = 1 + (Math.floor((i - 1)/ 3) + ((2 * i - 2) % 9) + i + j - 2) % 9; // this works somehow
                square.oninput = function(){inputCheck(i,j);};
                document.getElementById(rowNumber).appendChild(square);

                let pencilSquare = document.createElement("textarea");
                let pencilSquareNumber = "p" + i + j
                pencilSquare.className = "pencilSquare";
                pencilSquare.id = pencilSquareNumber;
                pencilSquare.type = "string";
                document.getElementById(pencilRowNumber).appendChild(pencilSquare)
            }
        }
        for (let i = 0; i < 100; i++){
            swap('row');
            swap('column');
        }
        removeBox(1000);
        console.log(filledSquare, bestRemovedSquareLengths, filledSquare.length, removedSquareIDs.length, filledSquare.length + removedSquareIDs.length)
        document.getElementById("alert").innerHTML = ``;
        clockstart()
    }, 1000)
}
function swap(type){
    let boxIndex = (Math.ceil(Math.random() * 3));
    let xIndex = 3 * boxIndex - (Math.floor(Math.random() * 3));
    let yIndex = 3 * boxIndex - (Math.floor(Math.random() * 3));
    while (true){
        if (xIndex == yIndex){
            yIndex = 3 * boxIndex - (Math.floor(Math.random() * 3));
        } else {break;}
    }
    
    if(type == "row"){
        for (let i = 1; i <= 9; i++){
            let square1Old = document.getElementById(`n${xIndex}${i}`).value;
            let square2Old = document.getElementById(`n${yIndex}${i}`).value;
            let square1New = square2Old;
            let square2New = square1Old;
            document.getElementById(`n${xIndex}${i}`).value = square1New;
            document.getElementById(`n${yIndex}${i}`).value = square2New;
        }
    } else if(type == "column"){
        for (let i = 1; i <= 9; i++){
            let square1Old = document.getElementById(`n${i}${xIndex}`).value;
            let square2Old = document.getElementById(`n${i}${yIndex}`).value;
            let square1New = square2Old;
            let square2New = square1Old;
            document.getElementById(`n${i}${xIndex}`).value = square1New;
            document.getElementById(`n${i}${yIndex}`).value = square2New;
        }
    }
}
function removeBox(tries){
    for(let i = 0; i < tries; i++){
        if (amountOfHalts < 50){
            let targetSquareIndex = Math.floor(Math.random() * filledSquare.length)
            let targetSquare = document.getElementById(filledSquare[targetSquareIndex]);
            let targetSquareInitialValue;
            targetSquareInitialValue = targetSquare.value

            let validNumberForCurrentSquare = [1,2,3,4,5,6,7,8,9]
            for(j = 0; j < 9; j++){
                targetSquare.value = j + 1;
                let isValid = checkValidity();
                targetSquare.value = ``
                if(isValid == false){
                    delete validNumberForCurrentSquare[j];
                }
            }
            validNumberForCurrentSquare = validNumberForCurrentSquare.filter(item => item !== undefined && item !== null && item !== '');
            if(validNumberForCurrentSquare.length == 1 && removedSquareIDs.includes(targetSquare.id) == false){
                filledSquare.splice(targetSquareIndex,1)
                removedSquareIDs.push(targetSquare.id);
                removedSquareValues.push(targetSquareInitialValue);
            } else{
                amountOfHalts +=1;
                targetSquare.value = targetSquareInitialValue;
            }
        }
        else if(amountOfHalts >= 50){
            amountOfHalts = 0;
            if (bestRemovedSquareLengths.findIndex(num => num >= removedSquareIDs.length) === -1) {
                bestRemovedSquareBoard.length = 0
                bestRemovedSquareLengths.push(removedSquareIDs.length)
                for(let i = 1; i <= 9; i++){
                    for(let j = 1; j <= 9; j++){
                        let value;
                        if(document.getElementById(`n${i}${j}`).value != ``){
                            value = document.getElementById(`n${i}${j}`).value
                        } else{
                            let idValue = removedSquareIDs.findIndex(square => square == `n${i}${j}`)
                            value = removedSquareValues[idValue]
                        }
                        bestRemovedSquareBoard.push(value)
                    }
                }
                bestRemovedSquareIDs.length = 0;
                bestRemovedSquareValues.length = 0;
                for(let i = 0; i < removedSquareIDs.length; i++){
                    bestRemovedSquareIDs.push(removedSquareIDs[i])
                    bestRemovedSquareValues.push(removedSquareValues[i])
                }
            }

            for (let i = 0; i < Math.ceil(Math.random() * removedSquareIDs.length); i++){
                let lastNumber = removedSquareIDs.length - 1;
                filledSquare.push(removedSquareIDs[lastNumber])
                document.getElementById(removedSquareIDs[lastNumber]).value = removedSquareValues[lastNumber]
                removedSquareIDs.splice(lastNumber,1)
                removedSquareValues.splice(lastNumber,1)
            }
        }
    }
    for (let i = 0; i < 9; i++){
        for (let j = 0; j < 9; j++){
            let index = document.getElementById(`n${i + 1}${j + 1}`)
            let ij = 9 * i + j
            index.value = bestRemovedSquareBoard[ij]
            index.readOnly = true;
            index.style.fontWeight = "bold"

            let pencilIndex = document.getElementById(`p${i + 1}${j + 1}`)
            pencilIndex.readOnly = true;
        }
    }
    for(let i = 0; i < bestRemovedSquareIDs.length; i++){
        let index = document.getElementById(bestRemovedSquareIDs[i])
        index.value = ``
        index.readOnly = false;
        index.style.fontWeight = "normal"

        let pencilIndex = document.getElementById("p" + bestRemovedSquareIDs[i].slice(1))
        pencilIndex.readOnly = false;
    }
}

var hour = document.getElementById("hour")
var minute = document.getElementById("minute")
var second = document.getElementById("second")
var clockint;

function clock(){
    second.innerHTML = eval(1+parseInt(second.innerHTML))
    if (second.innerHTML == 60){
        second.innerHTML = 0
        minute.innerHTML = eval(1+parseInt(minute.innerHTML))
    }
    
    if (minute.innerHTML == 60) {
        minute.innerHTML = 0
        hour.innerHTML = eval(1+parseInt(hour.innerHTML))
    }
}
function clockstart(){
            clockint = setInterval(clock, 1000) 
    }
function clockstop(){
    clearInterval(clockint)
}

let pencilToggle = false;
function pencil(){
    if (pencilToggle == false){
        pencilToggle = true;
        document.getElementById("pencilSquare").style.zIndex = 2;
        document.getElementById("pencil").style.backgroundColor = "green";
    } else{
        pencilToggle = false;
        document.getElementById("pencilSquare").style.zIndex = 0;
        document.getElementById("pencil").style.backgroundColor = "red";
    }
}
function log(){

}