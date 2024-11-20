#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//indicator
int eventMultiplier = 1;
int availableCharacters = 2; //update this
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
    else{
        return 0;
    }
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
int spyReputation = 50;
int healerReputation = 50;
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
        }
        else if (kidReputation <= 0){
            final.dialog = "i hate you";
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
        if (kidReputation >= 100){
            final.dialog = "i love you";
        }
        else if (kidReputation <= 0){
            final.dialog = "i hate you";
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
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "seer"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "devil"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "rebel"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "merchant"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "ustadz"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "spy"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "healer"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
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
            cout << "enter consequence switch";
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
            cout << "enter consequence switch";
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
    /*else if(character == "pirate"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "seer"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "devil"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "rebel"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "merchant"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "ustadz"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "spy"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }
    else if(character == "healer"){
        switch(dialogNumber){
            case 0:
            final.dialog = "dialog1";
            final.dialogChoiceYes = "choiceyes1";
            final.dialogChoiceNo = "choiceno1";
            break;
            case 1:
            final.dialog = "dialog2";
            final.dialogChoiceYes = "choiceyes2";
            final.dialogChoiceNo = "choiceno2";
            break;
            case 2:
            final.dialog = "dialog3";
            final.dialogChoiceYes = "choiceyes3";
            final.dialogChoiceNo = "choiceno3";
            break;
            case 3:
            final.dialog = "dialog4";
            final.dialogChoiceYes = "choiceyes4";
            final.dialogChoiceNo = "choiceno4";
            break;
            case 4:
            final.dialog = "dialog5";
            final.dialogChoiceYes = "choiceyes5";
            final.dialogChoiceNo = "choiceno5";
            break;
        }
    }*/
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

void startGame(){
    srand(time(0));
    int daysPassed = 0;
    string charactersList[]{
        "kid", "clown", "pirate", "seer", "devil", "rebel", "merchant", "ustadz", "spy", "healer"
    };
    while(true){
        DialogChoice final;
        daysPassed += 1;
        characterSeed = buffer + rand() % availableCharacters;
        cout << buffer << availableCharacters << characterSeed;
        dialogSeed = rand() % 5;
        string character = charactersList[characterSeed];
        //final = dialogList(character, dialogSeed); //use this after finish
        final = dialogList("clown", dialogSeed); //update this after finished
        cout << "Days Passed: " << daysPassed << " character:" << character;
        //event(character, gold, faith, power, health, final.dialog, final.dialogChoiceYes, final.dialogChoiceNo); // use this after finish
        event("clown", gold, faith, power, health, final.dialog, final.dialogChoiceYes, final.dialogChoiceNo); // update this when finished
    }
}

int main(){
    //intro
    /*event("king", gold, faith, power, health, "MAKE SURE TO ADJUST THE TERMINAL/CMD SO THAT MY FACE AND DIALOG IS VISIBLE! Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.", "Done", "Done but red");
    event("king", gold, faith, power, health, "(King): divisor, you have long stood by my side, bearing witness to the weight of the crown and the burdens it brings. Now, I entrust you with a great responsibility. For the coming days, you shall oversee the realm in my stead. Our kingdom faces challenges from all sides, our people grow restless, our nobles grow ambitious, and our enemies wait for any sign of weakness.", "Got it, your Majesty!", "I don't think im cut out for this job, but i'll try!!");    
    event("king", gold, faith, power, health, "(King): But fear not, for you are not alone. In the hands of a capable advisor, the fate of the kingdom is never sealed. You will guide us, make decisions, and steer the course of our destiny. Yet, know this, every decision you make will echo across the land. Every choice will ripple through our finances, our power, and the hearts of the people.", "Got it, your Majesty!", "I sure hope i don't make the wrong decision haha");   
    event("king", gold, faith, power, health, "(King): The first indicator, Gold, the most coveted and essential of all. It fuels our economy, finances our armies, and strengthens our kingdom. You will need it to fund projects, hire mercenaries, build fortifications, and even ensure the prosperity of our people. But beware, overindulgence can lead to insolvency, and a lack of gold will leave us weak.", "*keep listening", "*keep listening but red");    
    event("king", gold, faith, power, health, "(King): The second indicator, Faith is the belief the people hold in our kingdom and its leadership. It is fragile, easily swayed by your actions. The people must trust in us, believe in our cause. A wise ruler listens to the needs of their people, for should faith falter, revolt may rise, and the kingdom will crumble under its weight.", "*keep listening", "*keep listening but red");
    event("king", gold, faith, power, health, "(King): The third indicator, Power is what you will wield in the courts of the nobles and the field of battle. It is the influence you hold over the key figures in our realm. Should you gain the trust of the generals, the priests, and the merchants, you will find that power flows freely. But let this be known, abuse power, and you'll find yourself isolated, and our enemies will close in.", "*keep listening", "*keep listening but red");
    event("king", gold, faith, power, health, "(King): The fourth indicator, Health, the personal currency. It is a reflection of your own strength and resolve. Though it may seem trivial, neglecting your health will leave you vulnerable. Make decisions in haste, work too tirelessly, or ignore the warning signs of fatigue, and your health will falter. You cannot lead if you fall ill, Advisor.", "*keep listening", "*keep listening but red");
    event("king", gold, faith, power, health, "(King): You must navigate this web of consequences carefully, Advisor. Fail to manage the currencies and the kingdom will suffer. Should they fall too low, too little gold, too little power, too little faith, and your own health in decline, you will meet a tragic end. So, I leave it in your hands. For these days, you shall govern in my stead. I trust you will not fail me.", "Got it, your Majesty!", "Yeah yeah, what's the worst that could happen?");
    */
    startGame();
    return 0;
}
