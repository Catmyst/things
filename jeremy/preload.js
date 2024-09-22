//preaload all img
const images =[
    'display/intro/intro.png',
    'display/intro/intro2.png',
    'display/inventory/diary/diary.png',
    'display/inventory/candle/litcandle.png',
    'display/inventory/candle/unlitcandle.png',
    'display/inventory/fire/fire.png',
    'display/inventory/key/key.png',
    'display/inventory/masterkey/masterkey.png',
    'display/inventory/note/note.png',
    'display/inventory/plunger/plunger.png',
    'display/inventory/wrench/wrench.png',
    'display/maintitle/mainbg.png',
    'display/rooms/room1/bedroom.png',
    'display/rooms/room1/puzzles/wardrobe/chest.png',
    'display/rooms/room2/bathroom.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/1-1.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/1-2.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/1-3.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/2-1.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/2-2.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/2-3.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/3-1.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/3-2.png',
    'display/rooms/room2/puzzles/sink/puzzlepieces/3-3.png',
    'display/rooms/room2/puzzles/toilet/toilet.jpeg',
    'display/rooms/room2/puzzles/toilet/note.png',
    'display/rooms/room2/puzzles/toilet/poop.png',
]

function preload(){
    for(let i = 0; i<images.length; i++){
        const img = new Image()
        img.src =images[i]
    }
}
window.onload = function(){
    preload()
}