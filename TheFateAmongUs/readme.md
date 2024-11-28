# The fate among us

The fate among us is a decision-based text simulation game heavily inspired by the gane "Reigns" made by Nerial where you, the advisor to the king, must manage the kingdom in the king's absence. Every decision affects the kingdom's four core indicators which include: Gold, Faith, Power, and Health which determines the fate of your reign.

## Features

- **Dynamic Characters:** Interact with various characters, each influencing the kingdom differently.
- **Indicator Management:** Keep Gold, Faith, Power, and Health balanced to avoid catastrophe.
- **Multiple Endings:** Achieve victory or face unique endings for each indicator failure.
- **Randomized Events:** No two playthroughs are the same thanks to randomized character and dialogue combinations.
- **ASCII Art:** Enjoy "beautifully" rendered ASCII art for events and endings.
- **Replayability:** Challenge yourself with different strategies and difficulty modes.

## How to Play

1. Launch the game.
2. Select your preferred difficulty: 
   - **30-Day Reign**: A time-limited challenge.
   - **Infinite Reign**: Endure for as long as possible.
3. Interact with characters, respond to their dialogues, and manage the kingdom's indicators.
4. Avoid letting any indicator drop to zero to prevent disaster.
5. Survive to the end of the reign or achieve the best possible outcome.

## Controls

- Input `1` or `2` to select your response to each dialogue.
- Keep an eye on the indicator bars to guide your decisions.

## Installation
To get started with The Fate Among Us, you can either download the game or clone the repository directly from GitHub.

**Install Git (if you haven't already):**

Go to Git's official website and download the Git installer for your platform (Windows/macOS).
Follow the instructions to install Git on your computer.

**Clone the Repository:**

Open your terminal/command prompt and navigate to the folder where you want to store the project.

Type the following command:
git clone https://github.com/Catmyst/things.git

**Navigate to the Project Folder:**

Once the cloning is complete, navigate into the project folder:
cd things/TheFateAmongUs

**Build the Project:**

If the game requires compiling, you'll need to follow the build instructions. (If it's already compiled, you can skip this step.)

1. For Windows:

If you're using an IDE like Visual Studio, open the TFA.cpp file and build the project. The IDE will generate an executable (game.exe) in the output directory, which you can then run.

If you don't want to use an IDE, you can manually compile the code using a compiler like MinGW.
Open Command Prompt in the folder containing TFA.cpp.
Run the following command to compile the code:
g++ -std=c++11 -o game.exe TFA.cpp
This will generate the executable game.exe in the same directory.

2. For macOS:

Open the TFA.cpp file in an IDE like Xcode or use the terminal to compile it.
compile by typing:
g++ -std=c++11 -o name tfa.cpp

**Run the Game:**

After building or cloning, you can run the game from the terminal or by double-clicking the executable (game.exe for Windows or the application file for macOS).

**1.For Windows:**
Navigate to the folder where the executable file (game.exe) is located and double-click to start the game.

**For macOS:**
Run the Game:
Once you have cloned the repository and compiled, you can run the game from the terminal or the Applications folder by typing:
./name

## Credits

**Development**
-Catmyst (me, aka Nanda)

**Special Thanks**
-The creators of Reigns for inspiring this project.
-ASCII Art contributors and references for enhancing visual appeal.
-OpenAI's ChatGPT for the Story and dialog.
-Ms. Fivi for making us do a project, and for getting me to work alone, and also for being an awesome teacher in general