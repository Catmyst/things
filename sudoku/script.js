summonBox();
function summonBox(){
    for (let i = 1; i <= 9; i++){
        let row = document.createElement("span");
        let rowNumber = "row" + i;
        row.className= "row";
        row.id = rowNumber;
        document.getElementById("bigSquare").appendChild(row)
        for(let j = 1; j <= 9; j++){
            let square = document.createElement("input");
            let squareNumber = "n" + i + j;
            square.className = "square";
            square.id = squareNumber;
            square.type = "number";
            square.value = 1 + (Math.floor((i - 1)/ 3) + ((2 * i - 2) % 9) + i + j - 2) % 9; // this works somehow
            square.oninput = function(){inputCheck(i,j);};
            document.getElementById(rowNumber).appendChild(square);
        }
    }
}
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

/*setInterval(function(){
    checkValidity();
}, 5
)*/
function checkValidity(){
    let squares = document.getElementsByClassName("square");
    for (let i = 0; i < squares.length; i++){
        squares[i].style.color = "black"
    }

    // i = row, j = column
    let correctrow = 0;
    let correctcolumn = 0;
    for (let row = 1; row <= 9; row++){
        for (let column = 1; column <=9; column++){
            // check row
            for (let k = column-1; k >= 1; k--){
                let squareNumber = "n" + row + column;
                let square = document.getElementById(squareNumber);
                let kSquareNumber = "n" + row + k;
                let kSquare = document.getElementById(kSquareNumber);
                if(square.value == kSquare.value){
                    square.style.color = "red"
                    kSquare.style.color = "red"
                    console.log(`same number on row (${kSquareNumber} & ${squareNumber})`)
                } else{
                    correctrow++
                };
            }
            // check column
            for (let l = column-1; l >=1; l--){
                let squareNumber = "n" + column + row;
                let square = document.getElementById(squareNumber);
                let lSquareNumber = "n" + l + row;
                let lSquare = document.getElementById(lSquareNumber);
                if(square.value == lSquare.value){
                    square.style.color = "red"
                    lSquare.style.color = "red"
                    console.log(`same number on column (${lSquareNumber} & ${squareNumber})`)
                } else{
                    correctcolumn++
                };
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
                    if((row !== xRow && column !== xColumn) && square.value == x.value){
                        square.style.color = "red"
                        x.style.color = "red"
                        console.log(xRow, row)
                        console.log(xColumn,column)
                        console.log(`same number at box (${Math.floor(1 + (row - 1) / 3)},${Math.floor(1 + (column - 1) / 3)}) at (${row}, ${column}) & (${xRow}, ${xColumn}). `)
                    }
                }
            }
        }
    }
    console.log(correctrow,correctcolumn);
}