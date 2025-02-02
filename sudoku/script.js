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

