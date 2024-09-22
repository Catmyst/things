// room 1 exit door
function openexit(){
    if(holdingitem == 'masterkey'){
        puzzletemplate('exit')
        document.getElementById('puzzlespace').innerHTML =
        `
        <div class="windowblank" onclick="toggledot('11')" id="dot11"></div><div class="windowblank" onclick="toggledot('12')" id="dot12"></div><div class="windowblank" onclick="toggledot('13')" id="dot13"></div><div class="windowblank" onclick="toggledot('14')" id="dot14"></div><div class="windowblank" onclick="toggledot('15')" id="dot15"></div><div class="windowblank" onclick="toggledot('16')" id="dot16"></div>
        <div class="windowblank" onclick="toggledot('21')" id="dot21"></div><div class="windowblank" onclick="toggledot('22')" id="dot22"></div><div class="windowblank" onclick="toggledot('23')" id="dot23"></div><div class="windowblank" onclick="toggledot('24')" id="dot24"></div><div class="windowblank" onclick="toggledot('25')" id="dot25"></div><div class="windowblank" onclick="toggledot('26')" id="dot26"></div>
        <div class="windowblank" onclick="toggledot('31')" id="dot31"></div><div class="windowblank" onclick="toggledot('32')" id="dot32"></div><div class="windowblank" onclick="toggledot('33')" id="dot33"></div><div class="windowblank" onclick="toggledot('34')" id="dot34"></div><div class="windowblank" onclick="toggledot('35')" id="dot35"></div><div class="windowblank" onclick="toggledot('36')" id="dot36"></div>
        <div class="windowblank" onclick="toggledot('41')" id="dot41"></div><div class="windowblank" onclick="toggledot('42')" id="dot42"></div><div class="windowblank" onclick="toggledot('43')" id="dot43"></div><div class="windowblank" onclick="toggledot('44')" id="dot44"></div><div class="windowblank" onclick="toggledot('45')" id="dot45"></div><div class="windowblank" onclick="toggledot('46')" id="dot46"></div>
        <div class="windowblank" onclick="toggledot('51')" id="dot51"></div><div class="windowblank" onclick="toggledot('52')" id="dot52"></div><div class="windowblank" onclick="toggledot('53')" id="dot53"></div><div class="windowblank" onclick="toggledot('54')" id="dot54"></div><div class="windowblank" onclick="toggledot('55')" id="dot55"></div><div class="windowblank" onclick="toggledot('56')" id="dot56"></div>
        <div class="windowblank" onclick="toggledot('61')" id="dot61"></div><div class="windowblank" onclick="toggledot('62')" id="dot62"></div><div class="windowblank" onclick="toggledot('63')" id="dot63"></div><div class="windowblank" onclick="toggledot('64')" id="dot64"></div><div class="windowblank" onclick="toggledot('65')" id="dot65"></div><div class="windowblank" onclick="toggledot('66')" id="dot66"></div>
        `
    }else{}
}
function toggledot(dotnum){   
    let dotid = document.getElementById(`dot${dotnum}`)
    if(dotid.className == 'windowblank'){
        dotid.className = 'windowred'
    } else{dotid.className = 'windowblank'}

    let dotsarray = [
        'dot11', 'dot12', 'dot13', 'dot14', 'dot15', 'dot16',
        'dot21', 'dot22', 'dot23', 'dot24', 'dot25', 'dot26',
        'dot31', 'dot32', 'dot33', 'dot34', 'dot35', 'dot36',
        'dot41', 'dot42', 'dot43', 'dot44', 'dot45', 'dot46',
        'dot51', 'dot52', 'dot53', 'dot54', 'dot55', 'dot56',
        'dot61', 'dot62', 'dot63', 'dot64', 'dot65', 'dot66'
    ];
    let dotstates = [
        'windowblank', 'windowblank', 'windowblank', 'windowblank', 'windowblank', 'windowblank',
        'windowblank', 'windowred', 'windowblank', 'windowblank', 'windowred', 'windowblank',
        'windowblank', 'windowred', 'windowblank', 'windowblank', 'windowred', 'windowblank',
        'windowblank', 'windowblank', 'windowblank', 'windowblank', 'windowblank', 'windowblank',
        'windowred', 'windowblank', 'windowblank', 'windowblank', 'windowblank', 'windowred',
        'windowblank', 'windowred', 'windowred', 'windowred', 'windowred', 'windowblank'
    ] 
    let totalcorrectdots = 0
    for(let i=0; i<36; i++){
        if(document.getElementById(dotsarray[i]).className==dotstates[i]){
            totalcorrectdots +=1
        } else{totalcorrectdots = 0}
    }
    if (totalcorrectdots == 36){
        ending()
    } else{}
}
function closeexit(){
    closepuzzle()
    let input = document.getElementById('exitinput')
    input.onclick=openexit
}