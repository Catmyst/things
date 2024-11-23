#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//indicator
int eventMultiplier = 1;
int availableCharacters = 10;
int buffer = 0;
int dialogSeed = rand() % 5;
int characterSeed = buffer + rand() % availableCharacters;
int gold = 60;
int faith = 60;
int power = 60;
int health = 60;

void indicator(int gold, int faith, int power, int health){
    cout << "Gold   : ";
    for(int i = 0; i < gold/10; i++){
        cout << "X";
    }
    for(int i = 0; i < 10 - gold/10; i++){
        cout << "-";
    } cout << "(" << gold << "%)" << endl;

    cout << "Faith  : ";
    for(int i = 0; i < faith/10; i++){
        cout << "X";
    }
    for(int i = 0; i < 10 - faith/10; i++){
        cout << "-";
    } cout << "(" << faith << "%)" << endl;

    cout << "Power  : ";
    for(int i = 0; i < power/10; i++){
        cout << "X";
    }
    for(int i = 0; i < 10 - power/10; i++){
        cout << "-";
    } cout << "(" << power << "%)" << endl;

    cout << "Health : ";
    for(int i = 0; i < health/10; i++){
        cout << "X";
    }
    for(int i = 0; i < 10 - health/10; i++){
        cout << "-";
    }
    cout << "(" << health << "%)" << endl;
}

//character reputations
int kidReputation = 50;
int clownReputation = 50;
int pirateReputation = 50;
int seerReputation = 50;
int devilReputation = 50;
int rebelReputation = 50;
int merchantReputation = 50;
int ustadzReputation = 50;
int policeReputation = 50;
int healerReputation = 50;

int character(string type) {
    if(type == "king"){
        cout << R"(           
                         ____
                        / ___`\
            /|         ( (   \ \
        |^v^v  V|        \ \/) ) )
        \  ____ /         \_/ / /
        ,Y`    `,            / /
        ||  -  -)           { }
        \\   _\ |           | |
        \\ / _`\_         / /
        / |  ~ | ``\     _|_|
    ,-`  \    |  \ \  ,//(_}
    /      |   |   | \/  \| |
    |       |   |   | '   ,\ \
    |     | \   /  /\  _/`  | |
    \     |  | |   | ``     | |
    |    \  \ |   |        | |
    |    |   |/   |        / /
    |    |        |        | |
)";
    return 18;
    }
    else if(type == "kid"){
        cout << R"(
               ░░░░░░░░░░░░░░░░░░░░░░
             ░░░░░░░░░░░░░░░░░░░░░░░░░
            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
          ▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒
      ░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒  ██▒▒
          ▒▒░░░░░░░░░░░░░░░░  ██░░░░▒▒▒▒▒▒▒▒
          ▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒░░▒▒▒
            ░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒   ▒▒
            ░░░░░░░░░░░░░░░░░   ░░░░░░   ▒▒▒▒▒
              ░░░░░░░░░░░░░░░░░       ░░░░░░▒
              ░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒
                ░░░░░░░░░░░░░░░░░░░░░░▒▒
                ▒▒▒▒░░░░░░░░░░░░░░░░░░▒▒
                ▒▒░░░░░░░░░░░░░░░░░░░░
              ▒▒░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒
            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
      ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒
)";
    return 18;
    }
    else if(type == "clown"){
        cout << R"(
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠋⠁⠀⠉⠻⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠁⠀⠀⠀⠀⠀⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠞⠋⠉⠀⠀⢀⣀⣀⠀⠀⠈⠉⠙⠳⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣠⡴⢶⣤⣀⣤⣄⠀⠀⠀⠀⠀⠀⣿⣠⡴⠾⠛⠛⠉⠉⠉⠉⠛⠓⠶⣦⣄⣽⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢸⡏⠀⠀⠈⠉⠀⠙⠛⠛⠳⣆⣠⠾⠋⠁⣀⢤⠀⠀⠀⠀⠀⠀⠀⠀⡤⣀⠉⠛⢶⣄⠀⠀⣼⠛⠻⣶⠞⠛⢶⡄⠀⠀
⠀⣠⣼⣷⠀⠀⠀⠀⠀⠀⠀⠀⢀⡿⠁⠀⢠⠞⠁⠘⡇⠀⠀⠀⠀⠀⠀⢸⠁⠈⢳⡀⠀⠙⣷⡶⠟⠀⠀⠈⠀⠀⢠⡟⠀⠀
⣸⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣿⠁⠀⠀⠘⠂⣄⣚⠁⠀⠀⠀⠀⠀⠀⠈⢓⣤⠔⠛⠀⢰⣏⠀⠀⠀⠀⠀⠀⠀⠙⠛⠻⣦
⠹⣦⣀⠀⠀⠀⠀⠀⠀⠀⣤⣤⠟⠀⠀⠀⣰⣿⣿⠉⣱⡄⠀⠀⠀⠀⢠⢾⣿⡏⠙⣆⠀⠀⢹⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⣽
⠀⣼⠏⠀⠀⠀⠀⠀⠀⠀⠉⣷⠀⢀⠤⢄⣻⡙⠿⠟⣩⠇⢀⣀⣀⠀⠸⣜⠻⠿⢋⣟⡠⠄⡘⢷⣤⡄⠀⠀⠀⠀⠀⣀⣴⠟
⠀⠹⢦⣴⠀⠀⠀⠀⠀⠠⣶⡟⢰⠁⠀⠀⢹⠉⠓⠛⣡⠞⠛⠉⠉⠛⢷⣌⠙⠚⠉⡏⠀⠀⠈⣿⡁⠀⠀⠀⠀⠀⠀⢻⡅⠀
⠀⠀⠀⢿⡀⠀⠀⠀⠀⠀⣸⠇⠈⠢⣀⣠⠜⠀⠀⣸⠏⠀⠀⠀⠀⠀⠀⢻⡆⠀⠀⠳⡄⠀⠜⠙⢳⡆⠀⠀⣀⣀⣀⣼⠃⠀
⠀⠀⠀⠈⠙⠛⠷⣤⡴⢾⣏⠀⠀⠀⡞⠉⠉⠓⠦⣿⡀⠀⠀⠀⠀⠀⠀⢸⣷⠖⠉⠉⠙⡆⠀⠀⠀⣿⣤⡾⠋⠉⠁⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡀⠀⠀⣇⠀⠰⡀⠀⠈⢷⣄⠀⠀⠀⢀⣠⡟⠁⠀⡰⠃⠀⡎⠀⠀⢠⡟⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢷⡀⠀⠸⡄⠀⠙⢦⡀⠀⠉⠛⠳⠚⠛⠁⠀⢀⠜⠁⠀⡼⠁⠀⢠⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢳⣄⠀⠘⢦⡀⠀⠙⠲⢤⣀⣀⣀⣀⡤⠖⠁⠀⣠⠞⠁⠀⣴⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢷⣄⡀⠙⠲⢄⣀⠀⠀⠀⠀⠀⠀⣀⡤⠚⠁⢀⣤⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠶⣤⣀⣈⠉⠉⠉⠉⠉⠉⣀⣀⣤⠾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
)";
    return 18;
    }
    else if(type == "pirate"){
        cout << R"(
⠀⢀⠎⠉⠂⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠔⠉⠑⡀⠀
⡎⠁⠀⠀⠣⡀⠀⢀⡀⠔⠒⠉⠉⠀⠀⠀⠀⠈⠉⠐⠢⢄⡀⠀⢀⠜⠀⠀⠀⢱
⠈⠂⠉⠢⡀⠈⠲⣍⠀⠀⣀⠤⠒⠂⠉⠉⠑⠒⠤⣄⠀⠀⣨⠖⠁⢀⠔⠉⠀⠁
⠀⠀⠀⠀⡸⢦⡀⠈⡳⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢾⡁⢀⡴⢇⠀⠀⠀⠀
⠀⠀⠀⢰⠁⠀⢙⠞⠀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⡀⠙⡏⠀⠈⠇⠀⠀⠀
⠀⠀⢀⣆⠤⠤⠾⠿⢛⣛⣛⡛⠛⠛⠛⠛⠛⠛⢛⣛⣛⡛⠿⠿⠤⠤⣸⡀⠀⠀
⠀⠸⣁⠀⠀⢰⠊⠉⠀⣀⣤⣤⣀⠀⠀⠀⠀⢀⣤⣤⣀⠀⠉⠑⡆⠀⠀⣈⡇⠀
⠀⠀⠸⡍⠓⢺⠀⠀⣾⣿⣿⣿⣿⣧⠀⠀⣴⣿⣿⣿⣿⣷⡀⠀⡗⠚⠉⠇⠀⠀
⠀⠀⠀⣇⠀⠀⢇⠀⣿⣿⣿⣿⣿⣿⠀⠀⢿⣿⣿⣿⣿⣿⠃⢰⠃⠀⢸⠀⠀⠀
⠀⠀⠀⠸⡄⠀⠈⢦⡈⠛⠿⠿⠛⠁⣤⣤⠈⠛⠻⠿⠛⠁⡰⠃⠀⢀⠇⠀⠀⠀
⠀⠀⠀⠀⠙⣄⣠⠞⠙⢦⡀⠀⠀⠀⠛⠛⠀⠀⠀⢀⡠⠊⠳⣄⣠⠎⠀⠀⠀⠀
⠀⠀⠀⠀⢀⠜⠁⢀⡴⠋⣸⡕⢲⠤⠤⠤⠤⡖⢊⣯⠙⢦⡀⠈⠣⡀⠀⠀⠀⠀
⢀⠀⣀⠔⠁⢀⠔⠁⠙⠲⢿⢌⡟⠂⠸⠇⠐⢻⡡⡿⠖⠊⠉⠢⡀⠈⠢⣀⠀⡀
⢇⡀⠀⠀⡔⠁⠀⠀⠀⠀⠈⢆⠉⠁⠘⠃⠈⠉⡠⠃⠀⠀⠀⠀⠈⢢⠀⠀⠀⡸
⠀⠈⢆⣀⠄⠀⠀⠀⠀⠀⠀⠀⠙⠒⠠⠄⠒⠊⠀⠀⠀⠀⠀⠀⠀⠠⣀⡠⠁⠀
)";
    return 15;
    }
    else if(type == "seer"){
        cout << R"(
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⠞⠛⠉⠉⠛⠻⢷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠃⠀⠀⠀⠀⠀⠀⠰⡍⠻⣷⣄⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠇⠀⠀⠀⠀⠀⠀⠀⠀⠘⣷⣌⡛⠷⣯⣽⣧⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡏⣀⣀⣀⠀⠀⠀⠀⢀⣀⣀⢹⣿⢿⣾⠟⠙⢿⣦⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⣿⡄⠀⠀⠀⠀⠉⠉⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣼⡧⠶⠖⠚⠛⠛⠉⠉⠙⠛⠛⠲⠶⢾⣧⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣠⣶⣿⣿⣥⣤⣤⣤⣤⣄⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣠⣤⣤⣤⣤⣬⣽⣿⣶⣄⠀
⠐⣿⣻⣿⣿⣿⡿⠀⢠⡏⠙⡟⠻⣭⣍⣙⣛⣿⣿⣛⣋⣩⣭⠟⢻⠏⢹⡆⠀⢿⣿⣿⣿⡟⣿⠃
⠀⠙⢿⣯⣟⡷⠦⣤⡾⢀⣤⡇⠈⠙⠯⣽⣿⡇⢸⣿⣯⠽⠋⠁⢸⡆⡀⢿⣤⠴⢾⣻⣽⡾⠋⠀
⠀⠀⠀⠈⠛⠛⠿⡾⢡⠏⢸⡄⠀⠀⠉⣉⣼⠁⠈⢧⣈⠉⠀⠀⢀⣇⠹⡌⢷⡿⠟⠛⠁⠀⠀⠀
⠀⠀⠀⠀⠀⠀⡼⣡⡟⢠⡿⣷⣄⢀⣰⣁⣭⣀⣀⣬⣈⣧⡀⣠⢾⢿⣄⢹⣌⢧⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠰⢿⡟⢠⢿⡄⠙⠓⠛⠛⠁⠀⢠⣄⠀⠈⠙⠛⠛⠋⢀⡿⡄⢻⡿⠇⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣾⣡⡎⠈⢷⣤⣀⣀⡠⠤⠚⠉⠉⠓⠦⢄⣀⣀⣤⡞⠁⠹⣌⣷⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠙⣿⢠⠂⢸⡆⠀⠹⡶⠟⠉⠁⠈⠉⠻⢶⠏⠀⢠⡇⠀⡄⣿⠋⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢿⢿⢰⡏⣷⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣄⣾⣹⣇⡿⡿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠈⠈⢿⠻⣿⠿⣧⡄⠀⠀⠀⠀⠀⠀⢠⣴⠿⢿⠟⢿⠃⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⢿⣄⣠⡾⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
)";
    return 18;
    } 
    else if(type == "devil"){
        cout << R"(
                            ,-.
       ___,---.__          /'|`\          __,---,___
    ,-'    \`    `-.____,-'  |  `-.____,-'    //    `-.
  ,'        |           ~'\     /`~           |        `.
 /      ___//              `. ,'          ,  , \___      \
|    ,-'   `-.__   _         |        ,    __,-'   `-.    |
|   /          /\_  `   .    |    ,      _/\          \   |
\  |           \ \`-.___ \   |   / ___,-'/ /           |  /
 \  \           | `._   `\\  |  //'   _,' |           /  /
  `-.\         /'  _ `---'' , . ``---' _  `\         /,-'
     ``       /     \    ,='/ \`=.    /     \       ''
             |__   /|\_,--.,-.--,--._/|\   __|
             /  `./  \\`\ |  |  | /,//' \,'  \
            /   /     ||--+--|--+-/-|     \   \
           |   |     /'\_\_\ | /_/_/`\     |   |
            \   \__, \_     `~'     _/ .__/   /
             `-._,-'   `-._______,-'   `-._,-'
)";
    return 17;
    }
    else if(type == "merchant"){
        cout << R"(
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⢔⢒⡿⠯⠥⢦⣦⣾⣄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⢮⠊⠁⠀⠀⠀⠀⠈⠉⠛⠳⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⣿⣝⡴⡔⠀⠀⠀⠀⠀⠀⠀⠀⠘⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣀⣀⣦⣶⣿⣿⣯⣿⢽⠁⢰⣢⣶⣦⣌⠠⠴⠆⠘⣀⠀⠀⠀
⠀⠀⠀⠀⢀⠔⠁⠀⢂⠘⢻⢛⣛⠿⣝⠁⠀⠼⣁⡴⣖⣫⠙⠙⠿⡳⡅⠀⠀⠀
⠀⠀⠀⢀⠂⠰⠀⠀⠈⡄⢠⢓⣺⢇⡇⣊⠐⠀⠉⠁⠲⠒⠀⠀⠀⠑⠅⠀⠀⠀
⠀⠀⠀⣨⠀⡇⠀⠀⠀⠰⢸⠄⠄⣸⣷⡦⣄⢤⠄⢄⡀⣀⠤⠠⡀⠀⠈⡄⠀⠀
⠀⠀⢠⠁⠙⣇⠀⠀⠀⠀⢾⠘⢠⣿⣟⣿⣿⣪⣮⣶⣸⣮⣖⣢⣌⠁⠀⠁⠀⠀
⠀⠀⢸⠀⠀⢹⠀⠀⠀⠀⠸⠀⢝⣻⣯⣿⢿⡫⢺⡩⠍⣉⣉⣨⡗⠉⠂⠊⠀⠀
⠀⠀⡈⠂⠀⣾⠀⠀⠀⠀⠀⠆⡸⣹⡿⣿⣯⣷⣱⣙⠫⠧⠷⣦⠀⠀⠀⠀⠀⠀
⠀⢠⠇⠀⠀⢉⠀⠀⠀⠀⠀⠈⠕⣻⣿⣿⣿⣟⣿⣿⡷⣶⣾⠿⠒⡁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⡇⠀⠀⠀⠀⠀⠈⢇⠻⠽⣿⡿⢟⣿⣻⡟⠁⠰⣯⡕⡰⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢩⠀⠀⠀⠀⠀⢀⠬⣍⠱⠨⠯⠛⠙⢏⠀⢀⡀⣨⡀⠤⢚⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢂⠀⠀⠀⠀⠀⢠⠁⠀⠀⠀⠀⠀⢸⠄⠰⡶⠲⢦⠓⠍⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠡⡀⠀⠀⠀⠀⠀⠀⡄⠀⢀⠄⠊⠉⠙⠑⠒⠊⠉⠀⠀⠀
)";
    return 15;
    }
    else if(type == "rebel"){
        cout << R"(
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣤⣤⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⢿⣿⣿⣿⣿⣿⣿⡿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⣀⣠⠀⣶⣤⣄⣉⣉⣉⣉⣠⣤⣶⠀⣄⣀⡀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣶⣾⣿⣿⣿⣿⣦⣄⣉⣙⣛⣛⣛⣛⣋⣉⣠⣴⣿⣿⣿⣿⣷⣶⠀⠀⠀
⠀⠀⠀⠀⠈⠉⠉⠛⠛⠛⠻⠿⠿⠿⠿⠿⠿⠿⠿⠟⠛⠛⠛⠉⠉⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⣆⠀⠀⠀⢠⡄⠀⠀⠀⣰⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢀⣠⣶⣾⣿⡆⠸⣿⣶⣶⣾⣿⣿⣷⣶⣶⣿⠇⢰⣿⣷⣶⣄⡀⠀⠀⠀
⠀⠀⠺⠿⣿⣿⣿⣿⣿⣄⠙⢿⣿⣿⣿⣿⣿⣿⡿⠋⣠⣿⣿⣿⣿⣿⠿⠗⠀⠀
⠀⠀⠀⠀⠀⠙⠻⣿⣿⣿⣷⡄⠈⠙⠛⠛⠋⠁⢠⣾⣿⣿⣿⠟⠋⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣀⣤⣬⣿⣿⣿⣇⠐⣿⣿⣿⣿⠂⣸⣿⣿⣿⣥⣤⣀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠘⠻⠿⠿⢿⣿⣿⣿⣧⠈⠿⠿⠁⣼⣿⣿⣿⡿⠿⠿⠟⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢿⠀⣶⣦⠀⡿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
)";
    return 15;
    }
    else if(type == "ustadz"){
        cout << R"(
  .||,       /_ _\\     
 \.`',/      |'L'| |    
 = ,. =      | -,| L    
 / || \    ,-'\"/,'`.   
   ||     ,'   `,,. `.  
   ,|____,' , ,;' \| |  
  (3|\    _/|/'   _| |  
   ||/,-''  | >-'' _,\\ 
   ||'      ==\ ,-'  ,' 
   ||       |  V \ ,|   
   ||       |    |` |   
   ||       |    |   \  
   ||       |    \    \ 
   ||       |     |    \
   ||       |      \_,-'
   ||       |___,,--")_\
   ||         |_|   ccc/
   ||        ccc/       
)";
    return 18;
    }
    else if(type == "police"){
        cout << R"(
                      ________________
                      \      __      /         __
                       \_____()_____/         /  )
                       '============`        /  /
                        #---\  /---#        /  /
                       (# @\| |/@  #)      /  /
                        \   (_)   /       /  /
                        |\ '---` /|      /  /
                _______/ \\_____// \____/ o_|
               /       \  /     \  /   / o_|
              / |           o|        / o_| \
             /  |  _____     |       / /   \ \
            /   |  |===|    o|      / /\    \ \
           |    |   \@/      |     / /  \    \ \
           |    |___________o|__/----)   \    \/
           |    '              ||  --)    \     |
           |___________________||  --)     \    /
                |           o|   ''''   |   \__/
)";
    return 18;
    }
    else if(type == "healer"){
        cout << R"(
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠢⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢀⡴⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢄⡀⠀⠀⠀⠀
⠀⠀⠀⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣧⠀⠀⠀
⠀⢀⣾⠁⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣧⠀⠀
⠀⣼⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣄⠀
⠀⣿⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⡀⠀⠀⠀⠀⠀⣿⣥⠀
⠸⡇⠀⠀⢼⢿⡿⠿⣿⡃⠀⠀⢛⣷⠿⢶⣿⢿⣆⠀⠀⠀⠀⣿⣿⠀
⠀⣧⠀⠀⠐⠚⢿⢿⣾⠇⠀⠀⠿⠛⣿⡿⠟⠛⠁⠀⠀⠀⠀⣿⡟⠀
⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠇⠀
⠀⠙⣄⠀⠀⠀⢀⣀⣤⣤⣀⣀⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⡟⠀⠀
⠀⠀⠸⠀⠀⣴⣿⣽⣧⣿⣿⣿⡿⣶⣿⣿⣷⣦⠀⠀⢀⠀⢰⡇⠀⠀
⠀⠀⠘⣧⢡⠿⠛⢿⡉⠉⠉⠉⠉⢉⣉⣻⠟⠻⢸⣼⠀⠀⣼⣧⠀⠀
⠀⠀⠀⣿⣇⠀⠀⢢⡀⠀⠀⣀⣀⣠⠶⠋⠀⢀⢏⡟⠀⢸⣿⠛⡆⠀
⠀⠀⠀⠉⢻⡄⠀⢧⠈⢙⠙⠛⠋⠉⢲⠀⠀⠈⡋⠀⢀⣿⣿⠾⡇⠀
⠀⠀⠈⡀⠀⢻⣦⣸⡄⢸⡇⠀⣿⡀⠀⣇⣠⣿⣿⣷⠿⠋⠁⠜⠁⠀
⠀⠀⠀⠘⠤⠊⣰⡿⠅⢀⣿⣀⣙⣇⣀⣹⢿⡿⠟⠁⢀⠔⠁⠀⠀⠀
⠀⠀⠀⠀⣧⣾⠏⠀⠀⠀⡈⠉⠙⠛⠛⢇⠀⢡⣠⡞⠁⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⠙⢄⢀⣀⣀⣠⡦⠀⠀⠀⢈⣆⣀⠻⡅⠀⠀⠀⠀⠀⠀
)";
    return 18;
    }
    else{
        return 0;
    }
}

struct DialogChoice {
    string dialog;
    string dialogChoiceYes;
    string dialogChoiceNo;
};

DialogChoice dialogList(string character, int dialogNumber){
    DialogChoice final;
    if(character == "kid"){
        if (kidReputation >= 100){
            final.dialog = "i love you";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else if (kidReputation <= 0){
            final.dialog = "i hate you";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else{
        switch(dialogNumber){
            case 0:
            final.dialog = "Can you buy me some toys";
            final.dialogChoiceYes = "Yeah, sure (±M)";
            final.dialogChoiceNo = "...No? (N/A)";
            break;
            case 1:
            final.dialog = "Can you buy me some books";
            final.dialogChoiceYes = "Yeah, sure (±M)";
            final.dialogChoiceNo = "...No? (N/A)";
            break;
            case 2:
            final.dialog = "Can you help me catch frogs by the river?";
            final.dialogChoiceYes = "Yeah, meet you there! (±H)";
            final.dialogChoiceNo = "No way I'm getting my hands dirty! (N/A)";
            break;
            case 3:
            final.dialog = "Can we go pick some flowers in the forest?";
            final.dialogChoiceYes = "I do love me some flowers, lets go! (±H)";
            final.dialogChoiceNo = "Pick them yourself! (N/A)";
            break;
            case 4:
            final.dialog = "Can you let me sit on the throne just for a bit?";
            final.dialogChoiceYes = "As you wish, little lad (±P)";
            final.dialogChoiceNo = "That's a privilege for the king alone, I'm afraid.(N/A)";
            break;
        }
        }
    }
    else if(character == "clown"){
        if (clownReputation >= 100){
            final.dialog = "The people adore me, sire! this is amazing!";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else if (clownReputation <= 0){
            final.dialog = "Nobody laughs anymore, sire. I'm just gonna do pranks instead.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else{
            switch(dialogNumber){
                case 0:
                final.dialog = "I'm opening a show of juggle holy relics, swords, and gold coins while sneezing! Can i perform for the knights?";
                final.dialogChoiceYes = "Sure, the people need excitement. (±R,H,M)";
                final.dialogChoiceNo = "No, it's too reckless. (±R,H)";
                break;
                case 1:
                final.dialog = "A feast of pies for all! I baked them myself! though don't ask what's inside.";
                final.dialogChoiceYes = "Everyone loves a good pie! (±R,H,M)";
                final.dialogChoiceNo = "No, I won't risk a kingdom-wide stomachache. (±R,H,M)";
                break;
                case 2:
                final.dialog = "Let me paint the castle walls with colorful murals of our kingdom!";
                final.dialogChoiceYes = "The castle could use some decoration. (±H,M,W)";
                final.dialogChoiceNo = "No murals. Let the walls stay as is. (±H,M,W)";
                break;
                case 3:
                final.dialog = "Let's have a parade, sire, i'll lead the people!";
                final.dialogChoiceYes = "Yes! A parade will be good. (±R,H,M,W)";
                final.dialogChoiceNo = "No parades. We need to focus. (±R,H,M,W)";
                break;
                case 4:
                final.dialog = "Watch me balance a sword, a chalice, and a gold bar on my nose!";
                final.dialogChoiceYes = "Show us your magic! (±H,M,W)";
                final.dialogChoiceNo = "Please no, don't hurt yourself. (±H,M,W)";
                break;
            }
        }
    }
    else if(character == "pirate"){
        if (pirateReputation >= 100){
            final.dialog = "You've shown me the value of loyalty, sire. I swear my fleet will defend this kingdom with honor.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else if (pirateReputation <= 0){
            final.dialog = "The kingdom's turned its back on me, so why should I stay loyal? From now on, the seas are mine, and I take what I want!";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else{
            switch(dialogNumber){
                case 0:
                final.dialog = "Arr! Let me take the navy on a treasure hunt, gold for everyone!";
                final.dialogChoiceYes = "Set sail! Riches await us all. (±F,P,G)";
                final.dialogChoiceNo = "We need no reckless adventures. (±G,F,P,H)";
                break;
                case 1:
                final.dialog = "The merchant ships carry treasure, ripe for plundering! Shall we?";
                final.dialogChoiceYes = "Aye! Let's take what we can! (±F,P,G)";
                final.dialogChoiceNo = "No, trade is vital for the kingdom. (±G,F,P,H)";
                break;
                case 2:
                final.dialog = "A pirate feast! We'll cook up the finest fish, fresh from the sea.";
                final.dialogChoiceYes = "Sounds good! Let's enjoy a feast. (±G,F,P,H)";
                final.dialogChoiceNo = "We can't waste resources on feasting. (±F,H,P)";
                break;
                case 3:
                final.dialog = "How about some pirate tales to keep the peoplxe entertained, aye?";
                final.dialogChoiceYes = "Tell your tales! The people will love it. (±H,P,G)";
                final.dialogChoiceNo = "No tales. Keep your stories hidden. (±F,H,P)";
                break;
                case 4:
                final.dialog = "Let's build a fleet of pirate ships! The sea will be ours!";
                final.dialogChoiceYes = "Yes, the seas belong to us! (±F,P,G)";
                final.dialogChoiceNo = "No, we can't waste resources on this. (±G,F,P,H)";
                break;
            }
        }
    }
    else if(character == "seer"){
        if (seerReputation >= 100){
            final.dialog = "You have done well by trusting me. Your fate is entwined with mine now, and the future is clear and full of promise.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else if (seerReputation <= 0){
            final.dialog = "You doubt me? You doubt what I can see? Your future is not so bright, and your decisions will lead to ruin if you don't change your ways.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else{
            switch(dialogNumber){
                case 0:
                final.dialog = "I can see the future... but it's not clear for everyone. Do you want to hear my advice?";
                final.dialogChoiceYes = "Yes, please guide me. (±F,H,G)";
                final.dialogChoiceNo = "I don't need your visions. (±F,H,P)";
                break;
                case 1:
                final.dialog = "The future holds great power, but it's not without risk. Will you take the chance?";
                final.dialogChoiceYes = "I will risk it. (±G,F,P,H)";
                final.dialogChoiceNo = "I prefer not to take any risks. (±G,F,P,H)";
                break;
                case 2:
                final.dialog = "I see a powerful event coming your way. Will you embrace it?";
                final.dialogChoiceYes = "I embrace the power. (±F,P,G)";
                final.dialogChoiceNo = "I am afraid of the consequences. (±F,H,P)";
                break;
                case 3:
                final.dialog = "I foresee something good, but the cost may be heavy. Do you want to proceed?";
                final.dialogChoiceYes = "Let's take the chance for a better future. (±F,H,G)";
                final.dialogChoiceNo = "I can't bear the cost. I refuse. (±F,H,P)";
                break;
                case 4:
                final.dialog = "I can help you find clarity, but at a price. Will you accept my help?";
                final.dialogChoiceYes = "Yes, I need your guidance. (±G,F,P,H)";
                final.dialogChoiceNo = "I don't trust your vision. (±G,F,P,H)";
                break;
            }
        }
    }
    else if(character == "devil"){
        if (devilReputation >= 100){
            final.dialog = "Ah, my favorite ally! Together, we've reshaped the world in our image. Now, I shall grant you unparalleled power—though it comes at no small cost.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else if (devilReputation <= 0){
            final.dialog = "How dare you spurn me at every turn? You've tested my patience for the last time! Suffer the consequences of your defiance.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else{
            switch(dialogNumber){
                case 0:
                final.dialog = "Are you ready to make a deal? You gain much, but at what cost?";
                final.dialogChoiceYes = "Let's seal the deal! (±G,F,P,H)";
                final.dialogChoiceNo = "Leave me be, fiend! (±G,F,P,H)";
                break;
                case 1:
                final.dialog = "You think you can avoid my offer? But you'll never be truly free.";
                final.dialogChoiceYes = "I can't resist your deal! (±G,F,P,H)";
                final.dialogChoiceNo = "Freedom matters more. (±G,F,P,H)";
                break;
                case 2:
                final.dialog = "Every choice you make is a chain you wear. Will you embrace it?";
                final.dialogChoiceYes = "Chains bring strength! (±G,F,P,H)";
                final.dialogChoiceNo = "I'll break free instead. (±G,F,P,H)";
                break;
                case 3:
                final.dialog = "You might refuse, but don't think I won't offer again when the time is right.";
                final.dialogChoiceYes = "I'll take the offer! (±G,F,P,H)";
                final.dialogChoiceNo = "Not this time, Devil. (±G,F,P,H)";
                break;
                case 4:
                final.dialog = "You believe you can resist? You're not the first to think that.";
                final.dialogChoiceYes = "Your power is mine! (±G,F,P,H)";
                final.dialogChoiceNo = "I won't fall for this. (±G,F,P,H)";
                break;
            }
        }
    }
    else if(character == "rebel"){
        if (rebelReputation >= 100){
            final.dialog = "You've proven your loyalty. The cause is stronger with you. What will we do next?";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else if (rebelReputation <= 0){
            final.dialog = "You turned your back when we needed you. There's no place for hesitation in this fight.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else{
            switch(dialogNumber){
                case 0:
                final.dialog = "Join the fight or stand aside. Choose now!";
                final.dialogChoiceYes = "I'm with you, let's fight! (±G,F,P,H)";
                final.dialogChoiceNo = "This isn't my battle. (±F,P,H)";
                break;
                case 1:
                final.dialog = "Rebellion needs resources. Will you help?";
                final.dialogChoiceYes = "Take what you need. (±G,F,P,H)";
                final.dialogChoiceNo = "I can't spare anything. (±F,P,H)";
                break;
                case 2:
                final.dialog = "Our cause comes with a cost. Are you ready?";
                final.dialogChoiceYes = "I'll pay the price. (±G,F,P,H)";
                final.dialogChoiceNo = "The price is too high. (±F,P,H)";
                break;
                case 3:
                final.dialog = "Will you take up arms for freedom?";
                final.dialogChoiceYes = "Freedom is worth fighting for! (±G,F,P,H)";
                final.dialogChoiceNo = "Violence solves nothing. (±G,F,P,H)";
                break;
                case 4:
                final.dialog = "Stand with us or stand in our way.";
                final.dialogChoiceYes = "I'll stand with you! (±G,F,P,H)";
                final.dialogChoiceNo = "I want no part of this. (±G,F,P)";
                break;
            }
        }
    }
    else if(character == "merchant"){
        if (merchantReputation >= 100){
            final.dialog = "You've always kept your promises. I have something special for you.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else if (merchantReputation <= 0){
            final.dialog = "You've turned down too many offers. Now, your fortune is about to take a hit.";
            final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
            final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
        }
        else{
            switch(dialogNumber){
                case 0:
                final.dialog = "Gold can bring you power, but it comes with strings attached. Will you invest?";
                final.dialogChoiceYes = "I'm in, take my gold. (±G,F,P,H)";
                final.dialogChoiceNo = "Not worth the risk. (±G,P)";
                break;
                case 1:
                final.dialog = "Need more gold? I can help, but at a price. What will you do?";
                final.dialogChoiceYes = "I'll take your offer. (±G,F,P)";
                final.dialogChoiceNo = "No, I'll manage on my own. (±F,P,H)";
                break;
                case 2:
                final.dialog = "Want to trade some goods? What's your offer?";
                final.dialogChoiceYes = "Here's my men, make it worth it. (±G,F,P)";
                final.dialogChoiceNo = "I'll pass on this one. (±F)";
                break;
                case 3:
                final.dialog = "I have rare treasures that can change everything. Interested?";
                final.dialogChoiceYes = "I'll take the treasure. (±G,F,P,H)";
                final.dialogChoiceNo = "No, I have enough already. (±F,P,H)";
                break;
                case 4:
                final.dialog = "I have an offer that could change your fortunes. It'll cost you, though.";
                final.dialogChoiceYes = "I trust you, let's do it. (±G,F,P,H)";
                final.dialogChoiceNo = "Not today, thanks. (±F,P,H)";
                break;
            }
        }
    }
    else if(character == "ustadz"){
        if (ustadzReputation >= 100){
        final.dialog = "Your devotion has been unwavering. I have special blessings for you.";
        final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
        final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
    }
    else if (ustadzReputation <= 0){
        final.dialog = "You've turned away from the path. Prepare for the consequences.";
        final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
        final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
    }
    else{
        switch(dialogNumber){
            case 0:
                final.dialog = "Faith is the key to your power. Will you commit to it fully?";
                final.dialogChoiceYes = "I will follow your teachings. (±G,F,P,H)";
                final.dialogChoiceNo = "I prefer to make my own way. (±G,F,P,H)";
                break;
            case 1:
                final.dialog = "A sacrifice for faith will bring rewards. Will you give up something for it?";
                final.dialogChoiceYes = "I'll sacrifice for faith. (±G,F,P,H)";
                final.dialogChoiceNo = "I won't sacrifice. (±G,F,P,H)";
                break;
            case 2:
                final.dialog = "True strength comes from the soul. Will you strengthen yours?";
                final.dialogChoiceYes = "I seek spiritual strength. (±G,F,P,H)";
                final.dialogChoiceNo = "I don't need spiritual strength. (±G,F,P,H)";
                break;
            case 3:
                final.dialog = "Your faith will guide you through the trials ahead. Are you ready to follow it?";
                final.dialogChoiceYes = "I'm ready to follow. (±G,F,P,H)";
                final.dialogChoiceNo = "I need more time. (±G,F,P,H)";
                break;
            case 4:
                final.dialog = "Faith is the path to true peace, but it requires dedication. Will you walk that path?";
                final.dialogChoiceYes = "I walk the path of faith. (±G,F,P,H)";
                final.dialogChoiceNo = "I choose my own path. (±G,F,P,H)";
                break;
        }
    }
}
    else if(character == "police"){
    if (policeReputation >= 100){
        final.dialog = "You've supported justice unwaveringly. The law is on your side.";
        final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
        final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
    }
    else if (policeReputation <= 0){
        final.dialog = "You've undermined the law too often. Prepare for the consequences.";
        final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
        final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
    }
    else{
        switch(dialogNumber){
            case 0:
                final.dialog = "We need your help to maintain order. Will you lend your support?";
                final.dialogChoiceYes = "Order must be preserved. (±G,P,F,H)";
                final.dialogChoiceNo = "This isn't my concern. (±G,P,F,H)";
                break;
            case 1:
                final.dialog = "Justice requires sacrifices. Will you assist us in enforcing it?";
                final.dialogChoiceYes = "I'll aid in the effort. (±G,P,H)";
                final.dialogChoiceNo = "This isn't my fight. (±G,P,H)";
                break;
            case 2:
                final.dialog = "We must root out corruption. Will you stand with us?";
                final.dialogChoiceYes = "I'll fight corruption. (±G,P,F,H)";
                final.dialogChoiceNo = "Corruption isn't my problem. (±G,P,H)";
                break;
            case 3:
                final.dialog = "The city is at a tipping point. Will you help restore balance?";
                final.dialogChoiceYes = "I'll restore balance. (±P,F,H)";
                final.dialogChoiceNo = "Balance will restore itself. (±G,P,F,H)";
                break;
            case 4:
                final.dialog = "Laws are the backbone of our society. Will you help us enforce them?";
                final.dialogChoiceYes = "Laws must be upheld. (±G,P,F,H)";
                final.dialogChoiceNo = "I can't enforgivece the laws. (±G,P,F,H)";
                break;
        }
    }
}
    else if(character == "healer"){
    if (healerReputation >= 100){
        final.dialog = "Your faith in me has restored balance. Let me grant you life anew.";
        final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
        final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
    }
    else if (healerReputation <= 0){
        final.dialog = "You've squandered my trust. Your recklessness will cost you dearly.";
        final.dialogChoiceYes = "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎";
        final.dialogChoiceNo = "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎";
    }
    else{
        switch(dialogNumber){
            case 0:
                final.dialog = "Your wounds are severe. Let me heal you, but it'll come at a price.";
                final.dialogChoiceYes = "Heal me, no matter the cost. (±H,G)";
                final.dialogChoiceNo = "I can manage without you. (±H,G)";
                break;
            case 1:
                final.dialog = "Medicine is scarce, but I can spare some for a price.";
                final.dialogChoiceYes = "I'll take the medicine. (±H,G,F)";
                final.dialogChoiceNo = "I'll pass, save it for others. (±F,G,H)";
                break;
            case 2:
                final.dialog = "I can remove your afflictions, but it won't be painless. Will you endure it?";
                final.dialogChoiceYes = "I'll endure the pain. (±H,F,G)";
                final.dialogChoiceNo = "I'll keep my afflictions. (±H,F,G)";
                break;
            case 3:
                final.dialog = "Healing the soul is as vital as healing the body. Will you seek balance?";
                final.dialogChoiceYes = "Heal my soul, healer. (±H,F,G)";
                final.dialogChoiceNo = "I'll walk my own path. (±H,F,G)";
                break;
            case 4:
                final.dialog = "Life and death are intertwined. Do you trust me to save you?";
                final.dialogChoiceYes = "I trust you completely. (±H,G,F)";
                final.dialogChoiceNo = "Death is a part of life. (±H,F,G)";
                break;
        }
    }
}

    return final;
}

int dialog(string text){
    double textLength = text.length();
    int textLines = ceil(textLength/98);
    // top -
    for(int i = 0; i<= 100; i++){
        cout << "-";
    }
    cout << endl;
    // text
    for (int i = 0; i < textLines; i++){
        cout << "|" << text.substr(i * 98 , 98);
        if(textLines > 1 && i < textLines - 1){
            cout << "-";
        } 
        if(i * 98 + 98 > textLength){
            for(int j = 0; j <= 98 - (textLength - i * 98); j++){
                cout << " ";
            }
        }
    cout << "|" << endl;
    }
    // bottom -
    for(int i = 0; i<= 100; i++){
        cout << "-";
    }  
    return textLines + 2;
}

void consequence(string character, int dialogNumber, int playerchoice){
    if(character == "kid"){
        if (kidReputation >= 100){
            gold = 100;
            kidReputation = 50;
        }
        else if(kidReputation <= 0) {
        buffer +=1;
        availableCharacters -=1;
        }
        else{
            switch(dialogNumber){
                case 0:
                if(playerchoice == 1){
                    kidReputation += 5;
                    gold -= eventMultiplier * 5;
                }
                else{
                    kidReputation -=5;
                }
                break;
                case 1:
                if(playerchoice == 1){
                    kidReputation += 5;
                    gold -= eventMultiplier * 5;
                }
                else{
                    kidReputation -=5;
                }
                break;
                case 2:
                if(playerchoice == 1){
                    kidReputation += 5;
                    health -= eventMultiplier * 5;
                }
                else{
                    kidReputation -=5;
                }
                break;
                case 3:
                if(playerchoice == 1){
                    kidReputation += 5;
                    health -= eventMultiplier * 5;
                }
                else{
                    kidReputation -=5;
                }
                break;
                case 4:
                if(playerchoice == 1){
                    kidReputation += 5;
                    power -= eventMultiplier * 5;
                }
                else{
                    kidReputation -=5;
                }
            }
        }
    }
    else if(character == "clown"){
        int seed = rand() % 4;
        if (clownReputation >= 100){
            switch (seed){
            case 0:
            gold += 10;
            case 1:
            health += 10;
            case 2:
            power += 10;
            case 3:
            faith += 10;
            }
        clownReputation = 50;
        }
        else if(clownReputation <= 0) {
            switch (seed){
            case 0:
            gold -= 10;
            break;
            case 1:
            health -= 10;
            break;
            case 2:
            power -= 10;
            break;
            case 3:
            faith -= 10;
            break;
            }
        clownReputation = 50;
        }
        else{
            switch(dialogNumber){
                case 0:
                if(playerchoice == 1){
                    clownReputation += 5;
                    health -= eventMultiplier * 5;
                    faith -= eventMultiplier * 5;
                    power += 10;
                }
                else{
                    clownReputation -=5;
                    faith += 5;
                    health += 5;
                }
                break;
                case 1:
                if(playerchoice == 1){
                    clownReputation += 5;
                    faith -= eventMultiplier * 5;
                    health -= eventMultiplier * 5;
                    power += 5;
                    gold -= eventMultiplier * 5;
                }
                else{
                    clownReputation -=5;
                    faith += 5;
                    health += 5;
                    power -= eventMultiplier * 5;
                }
                break;
                case 2:
                if(playerchoice == 1){
                    clownReputation += 5;
                    health += 5;
                    power -= eventMultiplier * 5;
                    gold -= eventMultiplier * 5;
                }
                else{
                    clownReputation -=5;
                    health -= eventMultiplier * 5;
                    power += 5;
                    gold += 5;
                }
                break;
                case 3:
                if(playerchoice == 1){
                    clownReputation += 5;
                    faith -= eventMultiplier * 5;
                    health -= eventMultiplier * 5;
                    power += 10;
                    gold -= eventMultiplier * 5;
                }
                else{
                    clownReputation -=5;
                    faith += 5;
                    health += 5;
                    gold +=5;
                    power -= eventMultiplier * 5;
                }
                break;
                case 4:
                if(playerchoice == 1){
                    clownReputation += 5;
                    health -= eventMultiplier * 5;
                    power += 10;
                    gold -= eventMultiplier * 5;
                }
                else{
                    clownReputation -=5;
                    health += 5;
                    power -= eventMultiplier * 5;
                    gold +=5;
                }
            }
        }
    }   
    else if(character == "pirate"){
        if (pirateReputation >= 100){
            gold += 10;
            health += 5;
            power += 15;
            faith += 10;
            pirateReputation = 50;
        }
        else if(pirateReputation <= 0) {
            gold -= 15;
            health -= 10;
            power -= 5;
            faith -= 10;
            pirateReputation = 50;
        }
        else{
            switch(dialogNumber){
                case 0:
                if(playerchoice == 1){
                    pirateReputation += 5;
                    power += 15;
                    faith -= eventMultiplier * 5;
                    gold += 20;
                }
                else{
                    pirateReputation -=5;
                    faith += 10;
                    health += 5;
                    power -= eventMultiplier * 10;
                    gold -= eventMultiplier * 5;
                }
                break;
                case 1:
                if(playerchoice == 1){
                    pirateReputation += 5;
                    faith -= eventMultiplier * 10;
                    power += 10;
                    gold += 15;
                }
                else{
                    pirateReputation -=5;
                    faith += 5;
                    health += 5;
                    power -= eventMultiplier * 5;
                    gold -= eventMultiplier * 10;
                }
                break;
                case 2:
                if(playerchoice == 1){
                    pirateReputation += 5;
                    faith += 5;
                    health += 15;
                    power -= eventMultiplier * 5;
                    gold -= eventMultiplier * 10;
                }
                else{
                    pirateReputation -=5;
                    faith -= eventMultiplier * 5;
                    health -= eventMultiplier * 10;
                    power += 5;
                }
                break;
                case 3:
                if(playerchoice == 1){
                    pirateReputation += 5;
                    health += 10;
                    power -= eventMultiplier * 10;
                    gold -= eventMultiplier * 5;
                }
                else{
                    pirateReputation -=5;
                    faith += 5;
                    health -= eventMultiplier * 5;
                    power += 5;
                }
                break;
                case 4:
                if(playerchoice == 1){
                    pirateReputation += 5;
                    faith -= eventMultiplier * 15;
                    power += 20;
                    gold -= eventMultiplier * 15;
                }
                else{
                    pirateReputation -=5;
                    faith += 10;
                    health += 5;
                    power -= eventMultiplier * 5;
                    gold +=10;
                }
            }
        }
    }
    else if(character == "seer"){
        if (seerReputation >= 100){
            gold += 10;
            health += 10;
            power += 10;
            faith += 10;
            seerReputation = 50;
        }
        else if(seerReputation <= 0) {
            gold -= 10;
            health -= 10;
            power -= 10;
            faith -= 10;
            seerReputation = 50;
        }
        else{
            switch(dialogNumber){
                case 0:
                if(playerchoice == 1){
                    seerReputation += 5;
                    faith += 5;
                    health -= eventMultiplier * 5;
                    gold += 10;
                    power -= eventMultiplier * 10;
                }
                else{
                    seerReputation -=5;
                    faith -= eventMultiplier * 5;
                    health += 10;
                    gold -= eventMultiplier * 5;
                    power += 15;
                }
                break;
                case 1:
                if(playerchoice == 1){
                    seerReputation += 5;
                    faith += 10;
                    health += 5;
                    power -= eventMultiplier * 5;
                    gold -= eventMultiplier * 10;
                }
                else{
                    seerReputation -=5;
                    faith -= eventMultiplier * 10;
                    health -= eventMultiplier * 5;
                    power +=10;
                    gold +=5;
                }
                break;
                case 2:
                if(playerchoice == 1){
                    seerReputation += 5;
                    faith += 5;
                    health += 15;
                    power +=10;
                    gold -= eventMultiplier * 5;
                }
                else{
                    seerReputation -=5;
                    faith -= eventMultiplier * 5;
                    health -= eventMultiplier * 10;
                    gold += 10;
                    power -= eventMultiplier * 5;
                }
                break;
                case 3:
                if(playerchoice == 1){
                    seerReputation += 5;
                    faith +=10;
                    health -= eventMultiplier * 5;
                    power += 5;
                    gold -= eventMultiplier * 15;
                }
                else{
                    seerReputation -=5;
                    faith -= eventMultiplier * 10;
                    health += 5;
                    gold += 15;
                    power -= eventMultiplier * 10;
                }
                break;
                case 4:
                if(playerchoice == 1){
                    seerReputation += 5;
                    faith += 5;
                    health += 10;
                    power -= eventMultiplier * 15;
                    gold -= eventMultiplier * 10;
                }
                else{
                    seerReputation -=5;
                    faith -= eventMultiplier * 5;
                    health -= eventMultiplier * 10;
                    power += 15;
                    gold +=10;
                }
            }
        }
    }
    else if(character == "devil"){
        if (devilReputation >= 100){
            gold += 50;
            health -= eventMultiplier * 20;
            power += 50;
            faith -= eventMultiplier * 40;
            devilReputation = 50;
        }
        else if(devilReputation <= 0) {
            gold = 10;
            health = 10;
            power = 10;
            faith = 90;
            devilReputation = 50;
        }
        else{
            switch(dialogNumber){
                case 0:
                if(playerchoice == 1){
                    devilReputation += 5;
                    gold += 20;
                    faith -= eventMultiplier * 15;
                    power += 10;
                    health -= eventMultiplier * 5;
                }
                else{
                    devilReputation -=5;
                    gold -= eventMultiplier * 10;
                    faith += 5;
                    power -= eventMultiplier * 5;
                    health -= eventMultiplier * 10;
                }
                break;
                case 1:
                if(playerchoice == 1){
                    devilReputation += 5;
                    gold += 10;
                    faith -= eventMultiplier * 5;
                    power += 15;
                    health -= eventMultiplier * 10;
                }
                else{
                    devilReputation -=5;
                    gold -= eventMultiplier * 15;
                    faith += 10;
                    power -= eventMultiplier * 10;
                    health -= eventMultiplier * 5;
                }
                break;
                case 2:
                if(playerchoice == 1){
                    devilReputation += 5;
                    gold += 30;
                    faith -= eventMultiplier * 20;
                    power += 20;
                    health -= eventMultiplier * 15;
                }
                else{
                    devilReputation -=5;
                    gold -= eventMultiplier * 5;
                    faith += 10;
                    power -= eventMultiplier * 10;
                    health -= eventMultiplier * 10;
                }
                break;
                case 3:
                if(playerchoice == 1){
                    devilReputation += 5;
                    gold += 25;
                    faith -= eventMultiplier * 10;
                    power += 5;
                    health -= eventMultiplier * 20;
                }
                else{
                    devilReputation -=5;
                    gold -= eventMultiplier * 20;
                    faith += 5;
                    power -= eventMultiplier * 5;
                    health -= eventMultiplier * 5;
                }
                break;
                case 4:
                if(playerchoice == 1){
                    devilReputation += 5;
                    gold += 40;
                    faith -= eventMultiplier * 25;
                    power += 30;
                    health -= eventMultiplier * 30;
                }
                else{
                    devilReputation -=5;
                    gold -= eventMultiplier * 30;
                    faith += 15;
                    power -= eventMultiplier * 20;
                    health -= eventMultiplier * 20;
                }
            }
        }
    }
    else if(character == "rebel"){
        if (rebelReputation >= 100){
            gold += 20;
            faith -= eventMultiplier * 10;
            power += 25;
            health -= eventMultiplier * 10;
            rebelReputation = 50;
        }
        else if(rebelReputation <= 0) {
            gold -= eventMultiplier * 15;
            faith += 5;
            power -= eventMultiplier * 20;
            health -= eventMultiplier * 25;
            rebelReputation = 50;
        }
        else{
            switch(dialogNumber){
                case 0:
                if(playerchoice == 1){
                    rebelReputation += 5;
                    gold -= eventMultiplier * 10;
                    faith -= eventMultiplier * 5;
                    power += 10;
                    health -= eventMultiplier * 15;
                }
                else{
                    rebelReputation -=5;
                    faith += 10;
                    power -= eventMultiplier * 10;
                    health -= eventMultiplier * 5;
                }
                break;
                case 1:
                if(playerchoice == 1){
                    rebelReputation += 5;
                    gold -= eventMultiplier * 20;
                    faith -= eventMultiplier * 5;
                    power += 15;
                    health -= eventMultiplier * 10;
                }
                else{
                    rebelReputation -=5;
                    faith += 10;
                    power -= eventMultiplier * 5;
                    health -= eventMultiplier * 5;
                }
                break;
                case 2:
                if(playerchoice == 1){
                    rebelReputation += 5;
                    gold -= eventMultiplier * 15;
                    faith -= eventMultiplier * 10;
                    power += 20;
                    health -= eventMultiplier * 15;
                }
                else{
                    rebelReputation -=5;
                    faith += 5;
                    power -= eventMultiplier * 10;
                    health -= eventMultiplier * 5;
                }
                break;
                case 3:
                if(playerchoice == 1){
                    rebelReputation += 5;
                    gold -= eventMultiplier * 10;
                    faith -= eventMultiplier * 5;
                    power += 10;
                    health -= eventMultiplier * 10;
                }
                else{
                    rebelReputation -=5;
                    gold += 5;
                    faith += 5;
                    power -= eventMultiplier * 15;
                    health -= eventMultiplier * 5;
                }
                break;
                case 4:
                if(playerchoice == 1){
                    rebelReputation += 5;
                    gold -= eventMultiplier * 20;
                    faith -= eventMultiplier * 10;
                    power += 15;
                    health -= eventMultiplier * 20;
                }
                else{
                    rebelReputation -=5;
                    gold += 10;
                    faith += 10;
                    power -= eventMultiplier * 10;
                }
            }
        }
    }
    else if(character == "merchant"){
        if (merchantReputation >= 100){
            gold += 150;
            health -= eventMultiplier * 10;
            faith -= eventMultiplier * 15;
            merchantReputation = 50;
        }
        else if(merchantReputation <= 0) {
            gold -= eventMultiplier * 20;
            health -= eventMultiplier * 20;
            power -= eventMultiplier * 20;
            faith += 10;
            merchantReputation = 50;
        }
        else{
            switch(dialogNumber){
                case 0:
                if(playerchoice == 1){
                    merchantReputation += 5;
                    gold -= eventMultiplier * 30;
                    faith -= eventMultiplier * 5;
                    power += 30;
                    health -= eventMultiplier * 5;
                }
                else{
                    merchantReputation -=5;
                    gold += 10;
                    power -= eventMultiplier * 5;
                }
                break;
                case 1:
                if(playerchoice == 1){
                    merchantReputation += 5;
                    gold += 50;
                    faith -= eventMultiplier * 10;
                    power -= eventMultiplier * 40;
                }
                else{
                    merchantReputation -=5;
                    faith += 5;
                    power -= eventMultiplier * 10;
                    health -= eventMultiplier * 5;
                }
                break;
                case 2:
                if(playerchoice == 1){
                    merchantReputation += 5;
                    gold += 50;
                    faith -= eventMultiplier * 5;
                    power -= eventMultiplier * 35;
                }
                else{
                    merchantReputation -=5;
                    faith += 10;
                }
                break;
                case 3:
                if(playerchoice == 1){
                    merchantReputation += 5;
                    gold -= eventMultiplier *  60;
                    faith -= eventMultiplier * 10;
                    power += 50;
                    health += 30;
                }
                else{
                    merchantReputation -=5;
                    faith += 5;
                    power -= eventMultiplier * 5;
                    health -= eventMultiplier * 5;
                }
                break;
                case 4:
                if(playerchoice == 1){
                    merchantReputation += 5;
                    gold -= eventMultiplier * 80;
                    faith -= eventMultiplier * 25;
                    power += 100;
                    health += 10;
                }
                else{
                    merchantReputation -=5;
                    faith += 15;
                    power -= eventMultiplier * 5;
                    health -= eventMultiplier * 5;
                }
            }
        }
    }
    else if(character == "ustadz"){
    if (ustadzReputation >= 100){
        gold += 50;
        health -= eventMultiplier * 30;
        power += 25;
        faith += 50;
        ustadzReputation = 50;
    }
    else if(ustadzReputation <= 0) {
        gold -= eventMultiplier * 30;
        faith -= 50;
        power -= eventMultiplier * 25;
        health -= eventMultiplier * 20;
        ustadzReputation = 50;
    }
    else{
        switch(dialogNumber){
            case 0:
                if(playerchoice == 1){
                    ustadzReputation += 5;
                    gold -= eventMultiplier * 5;
                    faith += 20;
                    power -= eventMultiplier * 5;
                    health -= eventMultiplier * 5;
                }
                else{
                    ustadzReputation -=5;
                    gold += 5;
                    faith -= eventMultiplier * 5;
                    power -= eventMultiplier * 10;
                    health += 5;
                }
                break;
            case 1:
                if(playerchoice == 1){
                    ustadzReputation += 5;
                    gold -= eventMultiplier * 15;
                    faith += 25;
                    power -= eventMultiplier * 10;
                    health -= eventMultiplier * 10;
                }
                else{
                    ustadzReputation -=5;
                    gold += 10;
                    faith -= eventMultiplier * 5;
                    power -= eventMultiplier * 5;
                    health += 5;
                }
                break;
            case 2:
                if(playerchoice == 1){
                    ustadzReputation += 5;
                    gold -= eventMultiplier * 10;
                    faith += 30;
                    power -= eventMultiplier * 5;
                    health -= eventMultiplier * 15;
                }
                else{
                    ustadzReputation -=5;
                    gold += 5;
                    faith -= eventMultiplier * 10;
                    power -= eventMultiplier * 5;
                    health += 5;
                }
                break;
            case 3:
                if(playerchoice == 1){
                    ustadzReputation += 5;
                    gold -= eventMultiplier * 10;
                    faith += 20;
                    power -= eventMultiplier * 5;
                    health -= eventMultiplier * 10;
                }
                else{
                    ustadzReputation -=5;
                    gold += 5;
                    faith -= eventMultiplier * 5;
                    power += 10;
                    health += 5;
                }
                break;
            case 4:
                if(playerchoice == 1){
                    ustadzReputation += 5;
                    gold -= eventMultiplier * 20;
                    faith += 30;
                    power -= eventMultiplier * 15;
                    health -= eventMultiplier * 20;
                }
                else{
                    ustadzReputation -=5;
                    gold += 10;
                    faith -= eventMultiplier * 10;
                    power -= eventMultiplier * 10;
                    health += 10;
                }
            }
        }
    }
    else if(character == "police"){
    if (policeReputation >= 100){
        power += 80;
        policeReputation = 50;
    }
    else if(policeReputation <= 0) {
        power -= eventMultiplier * 20;
        policeReputation = 50;
    }
    else{
        switch(dialogNumber){
            case 0:
                if(playerchoice == 1){
                    policeReputation += 5;
                    gold -= eventMultiplier * 10;
                    faith += 5;
                    power += 15;
                    health -= eventMultiplier * 10;
                }
                else{
                    policeReputation -=5;
                    gold += 20;
                    faith -= eventMultiplier * 5;
                    power -= eventMultiplier * 20;
                    health += 10;
                }
                break;
            case 1:
                if(playerchoice == 1){
                    policeReputation += 5;
                    gold -= eventMultiplier * 10;
                    power += 10;
                    health -= eventMultiplier * 5;
                }
                else{
                    policeReputation -=5;
                    gold += 10;
                    power -= eventMultiplier * 5;
                    health += 5;
                }
                break;
            case 2:
                if(playerchoice == 1){
                    policeReputation += 5;
                    gold -= eventMultiplier * 30;
                    faith += 5;
                    power += 25;
                    health -= eventMultiplier * 10;
                }
                else{
                    policeReputation -=5;
                    gold += 15;
                    power -= eventMultiplier * 25;
                    health += 20;
                }
                break;
            case 3:
                if(playerchoice == 1){
                    policeReputation += 5;
                    faith += 5;
                    power += 20;
                    health -= eventMultiplier * 30;
                }
                else{
                    policeReputation -=5;
                    gold += 10;
                    faith -= eventMultiplier * 5;
                    power -= eventMultiplier * 10;
                    health += 25;
                }
                break;
            case 4:
                if(playerchoice == 1){
                    policeReputation += 5;
                    gold -= eventMultiplier * 15;
                    faith += 10;
                    power +=10;
                    health -= eventMultiplier * 15;
                }
                else{
                    policeReputation -=5;
                    gold += 20;
                    faith -= eventMultiplier * 5;
                    power -= eventMultiplier * 10;
                    health += 10;
                }
            }
        }
    }
    else if(character == "healer"){
    if (healerReputation >= 100){
        health += 100;
        healerReputation = 50;
    }
    else if(healerReputation <= 0) {
        health -= eventMultiplier * 100;
        healerReputation = 50;
    }
    else{
        switch(dialogNumber){
            case 0:
                if(playerchoice == 1){
                    healerReputation += 5;
                    gold -= eventMultiplier * 15;
                    health += 10;
                }
                else{
                    healerReputation -=5;
                    gold += 20;
                    health -= eventMultiplier * 10;
                }
                break;
            case 1:
                if(playerchoice == 1){
                    healerReputation += 5;
                    gold -= eventMultiplier * 15;
                    faith -= eventMultiplier * 10;
                    health += 20;
                }
                else{
                    healerReputation -=5;
                    gold += 30;
                    faith += 5;
                    health -= eventMultiplier * 20;
                }
                break;
            case 2:
                if(playerchoice == 1){
                    healerReputation += 5;
                    gold -= eventMultiplier * 40;
                    faith += 5;
                    health += 30;
                }
                else{
                    healerReputation -=5;
                    gold += 40;
                    faith -= eventMultiplier * 5;
                    health += eventMultiplier * 20;
                }
                break;
            case 3:
                if(playerchoice == 1){
                    healerReputation += 5;
                    gold -= eventMultiplier * 60;
                    faith += 5;
                    health += 40;
                }
                else{
                    healerReputation -=5;
                    gold += 60;
                    faith -= eventMultiplier * 5;
                    health -= eventMultiplier * 40;
                }
                break;
            case 4:
                if(playerchoice == 1){
                    healerReputation += 5;
                    gold -= eventMultiplier * 70;
                    faith += 10;
                    health += 50;
                }
                else{
                    healerReputation -=5;
                    gold += 80;
                    faith -= eventMultiplier * 15;
                    health -= eventMultiplier * 50;
                }
            }
        }
    }
}

void event(string chara, int gold, int faith, int power, int health, string text, string choiceYes, string choiceNo){
    int playerChoice;
    int artLines = character(chara);
    indicator(gold, faith, power, health);
    int dialogLines = dialog(text);
    cout << endl << "\033[33mtype either 1 or 2 according to the choice\033[0m" << endl;
    cout << "\033[32m(1)" << choiceYes << "   \033[31m(2)" << choiceNo << endl;
    cout << "\033[33mYour Choice: \033[0m"; cin >> playerChoice;
    consequence(chara, dialogSeed, playerChoice);
    //consequence("kid", dialogSeed, playerChoice);
    // 30 lines cout checker, if cout <30 lines, endl until 30
    for(int i = artLines + dialogLines + 4; i <= 30; i++){
        cout << endl;
    }
}

void ending(string endType){
string lose = R"(
██╗   ██╗ ██████╗ ██╗   ██╗    ██╗      ██████╗ ███████╗███████╗
╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║     ██╔═══██╗██╔════╝██╔════╝
 ╚████╔╝ ██║   ██║██║   ██║    ██║     ██║   ██║███████╗█████╗  
  ╚██╔╝  ██║   ██║██║   ██║    ██║     ██║   ██║╚════██║██╔══╝  
   ██║   ╚██████╔╝╚██████╔╝    ███████╗╚██████╔╝███████║███████╗
   ╚═╝    ╚═════╝  ╚═════╝     ╚══════╝ ╚═════╝ ╚══════╝╚══════╝
)";

    if(endType == "win"){
        event("king", gold, faith, power, health, "(King): Advisor, I return to a kingdom that surpasses anything I could have imagined. Under your guidance, the people have flourished. Your wisdom has kept us safe, and your strength has carried us through every storm. I could not have asked for a more loyal ally.", "The kingdom is in your hands now, Your Majesty.", "I simply did what needed to be done, Your Majesty.");
        event("king", gold, faith, power, health, "(King): You've proven yourself time and again, but it is not just your skill in diplomacy or strategy that has shone. It is your heart, Advisor. You have steered us not just with your mind, but with compassion. You've led as much as I have.", "It is an honor to serve you, Sire.", "I only acted in the kingdom's best interest.");        
        event("king", gold, faith, power, health, "(King): While I was away, you became the pillar on which this kingdom rested. The people may sing my name, but they will speak of you, too. Your name will echo through history.", "We did this together, Your Majesty.", "The people's gratitude is the true reward.");    
        event("king", gold, faith, power, health, "(King): I knew I could leave the kingdom in capable hands, but I didn't expect you to surpass even my own hopes. You've built something that will last beyond our reigns. A legacy that no one can tear down.", "Your trust in me was the foundation.", "The kingdom's strength lies in its people.");    
        event("king", gold, faith, power, health, "(King): Advisor, you've not only safeguarded our present, but you've ensured the future of this kingdom. It is thanks to your dedication that our story will be remembered for generations to come.", "I will continue to serve with all my strength.", "The kingdom will thrive as long as we stand together."); 
        cout << R"(
██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗██╗███╗   ██╗
╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██║████╗  ██║
 ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║██╔██╗ ██║
  ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║██║╚██╗██║
   ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝██║██║ ╚████║
   ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝
            )";   
    }
    else if (endType == "loseGold"){
        event("king", gold, faith, power, health, "(King): What have you done to my kingdom? How did we fall so far? Gold, faith, power… health… All of it is gone. Our people, our soldiers, our future… all slipping away like sand through my fingers.", "It's not my fault, Your Majesty!", "We must face the consequences together.");
        event("king", gold, faith, power, health, "(King): Gold… The very foundation of our power! How did we lose it all? With no gold, we cannot pay our armies, we cannot feed our people, and our enemies grow stronger with every passing day.", "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ !", "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎...");
        event("king", gold, faith, power, health, "(King): And now, after all this... you can't even speak? You, the one who was supposed to guide the people, stand there in silence What is there left to say? You've failed me, failed the kingdom. If you have nothing to say for yourself, then... Get out. Leave my sight, you're no use to me anymore!", "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ !", "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎...");
        cout << lose;
    }
    else if (endType == "loseFaith"){
        event("king", gold, faith, power, health, "(King): What have you done to my kingdom? How did we fall so far? Gold, faith, power… health… All of it is gone. Our people, our soldiers, our future… all slipping away like sand through my fingers.", "It's not my fault, Your Majesty!", "We must face the consequences together.");
        event("king", gold, faith, power, health, "(King): Faith… It was the strength of our people, the bond that kept them loyal. But now, look at them. They've turned their backs on us, and I can feel the trust slipping away, like water from a cracked vessel.", "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ !", "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎...");
        event("king", gold, faith, power, health, "(King): And now, after all this... you can't even speak? You, the one who was supposed to guide the people, stand there in silence What is there left to say? You've failed me, failed the kingdom. If you have nothing to say for yourself, then... Get out. Leave my sight, you're no use to me anymore!", "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ !", "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎...");
        cout << lose;
    }
    else if (endType == "losePower"){
        event("king", gold, faith, power, health, "(King): What have you done to my kingdom? How did we fall so far? Gold, faith, power… health… All of it is gone. Our people, our soldiers, our future… all slipping away like sand through my fingers.", "It's not my fault, Your Majesty!", "We must face the consequences together.");
        event("king", gold, faith, power, health, "(King): Power… the one thing that holds a kingdom together. But now, we are weak. Our influence is gone. And our enemies sense our vulnerability, the kingdom crumbles under their gaze.", "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ !", "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎...");
        event("king", gold, faith, power, health, "(King): And now, after all this... you can't even speak? You, the one who was supposed to guide the people, stand there in silence What is there left to say? You've failed me, failed the kingdom. If you have nothing to say for yourself, then... Get out. Leave my sight, you're no use to me anymore!", "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ !", "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎...");
        cout << lose;
    }
    else if (endType == "loseHealth"){
        event("king", gold, faith, power, health, "(King): What have you done to my kingdom? How did we fall so far? Gold, faith, power… health… All of it is gone. Our people, our soldiers, our future… all slipping away like sand through my fingers.", "It's not my fault, Your Majesty!", "We must face the consequences together.");
        event("king", gold, faith, power, health, "(King): Health… So many of our people are dying, advisor. Our kingdom is sick, starving, broken. We've allowed the disease to spread unchecked, and now there's no cure.", "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ !", "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎...");
        event("king", gold, faith, power, health, "(King): And now, after all this... you can't even speak? You, the one who was supposed to guide the people, stand there in silence What is there left to say? You've failed me, failed the kingdom. If you have nothing to say for yourself, then... Get out. Leave my sight, you're no use to me anymore!", "⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ ⍓︎♏︎⬧︎ !", "■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎ ■︎□︎◻︎♏︎...");
        cout << lose;
    }
}

void startGame(){
    srand(time(0));
    int daysPassed = 0;
    string charactersList[]{
        "kid", "clown", "pirate", "seer", "devil", "rebel", "merchant", "ustadz", "police", "healer"
    };
    while(true){
        //ending checks
        if (daysPassed >=30){
            ending("win");
            break;
        }
        if(gold <= 0){
            ending("loseGold");
            break;
        }
        else if(faith <= 0){
            ending("loseFaith");
            break;
        }
        else if(power <= 0){
            ending("losePower");
            break;
        }
        else if(health <= 0){
            ending("loseHealth");
            break;
        }
        DialogChoice final;
        daysPassed += 1;
        characterSeed = buffer + rand() % availableCharacters;
        dialogSeed = rand() % 5;
        string character = charactersList[characterSeed];
        final = dialogList(character, dialogSeed); //use this after finish
        cout << "Days Passed: " << daysPassed << " character:" << character;
        event(character, gold, faith, power, health, final.dialog, final.dialogChoiceYes, final.dialogChoiceNo); // use this after finish
    }
}

int main(){
    //intro
    event("king", gold, faith, power, health, "MAKE SURE TO ADJUST THE TERMINAL/CMD SO THAT MY FACE AND DIALOG IS VISIBLE! Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.", "Done", "Done but red");
    event("king", gold, faith, power, health, "(King): divisor, you have long stood by my side, bearing witness to the weight of the crown and the burdens it brings. Now, I entrust you with a great responsibility. For the coming days, you shall oversee the realm in my stead. Our kingdom faces challenges from all sides, our people grow restless, our nobles grow ambitious, and our enemies wait for any sign of weakness.", "Got it, your Majesty!", "I don't think im cut out for this job, but i'll try!!");    
    event("king", gold, faith, power, health, "(King): But fear not, for you are not alone. In the hands of a capable advisor, the fate of the kingdom is never sealed. You will guide us, make decisions, and steer the course of our destiny. Yet, know this, every decision you make will echo across the land. Every choice will ripple through our finances, our power, and the hearts of the people.", "Got it, your Majesty!", "I sure hope i don't make the wrong decision haha");   
    event("king", gold, faith, power, health, "(King): The first indicator, Gold, the most coveted and essential of all. It fuels our economy, finances our armies, and strengthens our kingdom. You will need it to fund projects, hire mercenaries, build fortifications, and even ensure the prosperity of our people. But beware, overindulgence can lead to insolvency, and a lack of gold will leave us weak.", "*keep listening", "*keep listening but red");    
    event("king", gold, faith, power, health, "(King): The second indicator, Faith is the belief the people hold in our kingdom and its leadership. It is fragile, easily swayed by your actions. The people must trust in us, believe in our cause. A wise ruler listens to the needs of their people, for should faith falter, revolt may rise, and the kingdom will crumble under its weight.", "*keep listening", "*keep listening but red");
    event("king", gold, faith, power, health, "(King): The third indicator, Power is what you will wield in the courts of the nobles and the field of battle. It is the influence you hold over the key figures in our realm. Should you gain the trust of the generals, the priests, and the merchants, you will find that power flows freely. But let this be known, abuse power, and you'll find yourself isolated, and our enemies will close in.", "*keep listening", "*keep listening but red");
    event("king", gold, faith, power, health, "(King): The fourth indicator, Health, the personal currency. It is a reflection of your own strength and resolve. Though it may seem trivial, neglecting your health will leave you vulnerable. Make decisions in haste, work too tirelessly, or ignore the warning signs of fatigue, and your health will falter. You cannot lead if you fall ill, Advisor.", "*keep listening", "*keep listening but red");
    event("king", gold, faith, power, health, "(King): You must navigate this web of consequences carefully, Advisor. Fail to manage the currencies and the kingdom will suffer. Should they fall too low, too little gold, too little power, too little faith, and your own health in decline, you will meet a tragic end. So, I leave it in your hands. For these days, you shall govern in my stead. I trust you will not fail me.", "Got it, your Majesty!", "Yeah yeah, what's the worst that could happen?");
    
    startGame();
    return 0;
}
