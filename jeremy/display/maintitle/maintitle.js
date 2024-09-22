//main title
function closecredit(){
    let creditcontent = document.getElementById("creditpopupspace")
    let creditx = document.getElementById("creditx")
    creditcontent.remove()
    creditx.remove()
}
function showcredit(){
    let creditpopupspace = document.getElementById("creditpopupspace")
    let creditspace = document.getElementById("creditspace")
    let creditxspace = document.getElementById("creditxspace")

    var creditx = document.createElement("div")
    creditx.classList="centertext fivevw bg"
    creditx.id = "creditx"
    creditx.textContent = "X"
    creditx.onclick = closecredit

    var creditcontent = document.createElement('div')
    creditcontent.classList="centertext fivevw bg"
    creditcontent.id = "creditpopupspace"

    var creditTitle= document.createElement('p')
    creditTitle.classList="centertext fivevw"
    creditTitle.id="credittitle"
    creditTitle.textContent="credits"
    
    creditspace.appendChild(creditcontent)
    creditcontent.appendChild(creditTitle)
    creditxspace.appendChild(creditx)
    creditcontent.innerHTML +="hey, I made this game entirely by myself! (apart from the images which i took from craiyon), hope you have fun! :D<br><a style='text-shadow: 0'href='https://www.instagram.com/catmyst_'>~Catmyst</a>"
}