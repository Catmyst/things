// slot 1 diary
function opendiary(){
    puzzletemplate('diary')
    let puzzlespace = document.getElementById('puzzlespace')
    let diarylog = document.createElement('span')
    diarylog.id = 'diarylog'
    puzzlespace.appendChild(diarylog)
    diarylog.innerHTML = '<span style="text-decoration: underline;">March 3rd, 2006</span><br>Thank God I found a blank book to write my diary, or else I would have gone insane. If any of you read this diary, best of luck getting out of here lmao. I don\'t think this is like any ordinary mansion; there seems to be some weird magic that restricts the victim from closing my eye. I don\'t think I\'ve blinked in the last 3 hours since I suddenly got here.<br><br><span style="text-decoration: underline;">March 4th, 2006</span><br>It\'s the next day, or at least that\'s what I thought. Apparently, all the progress I\'ve made was reset. I had made so much progress yesterday, and suddenly I was back in this bed. Maybe the developer is just too lazy to program a save game function. ¯\\_(ツ)_/¯ All I know is that after a change of day, I\'d be teleported back here, on top of the bed, stripped of my progress.<br><br><span style="text-decoration: underline;">March 5th, 2006</span><br>It\'s been 3 days, and I\'ve got no sign of fatigue. So it is true that everything gets reset every time it\'s a new day, even your body. Whoever is the mastermind behind all this definitely wants us to be here for a while, but for what reason?<br><br><span style="text-decoration: underline;">March 6th, 2006</span><br>I finally got out of the bedroom yesterday, but the day ticked as usual. The key to getting out of this room is to change the time on that clock to exactly at midnight. The clock will chime, but no progress is lost, and yo* w*ll get the k** fro* ** al***ing *** t* op** *** w**d****, * *ill w**te *** ***t t***rr** a* *** ****t ** **** ******** *****.<br><br><span style="text-decoration: underline;">March 7th, 2006</span><br><span style="font-style: italic">The page looks empty, <span style="color:red;">with wet stains and ice cubes everywhere, only on this specific page for some reason</span>. This is the end of the diary.</span>'
}
function closediary(){
    closepuzzle()
    let input = document.getElementById('diary')
    input.onclick= opendiary
}