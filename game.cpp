#include <iostream>
#include <string>
using namespace std;

// Function to display the introduction and start the game
void gameIntro() {
    cout << "Welcome to the Survival Decision Game!" << endl;
    cout << "In this game, you will face a series of life-or-death situations." << endl;
    cout << "Your choices will determine whether you survive or not." << endl;
    cout << "Let's begin!" << endl;
}

// Function to simulate a dangerous scenario and decide based on user input
void jungleScenario() {
    string choice;
    cout << "\n--- Jungle Scenario ---" << endl;
    cout << "You are lost in a dangerous jungle. You hear a wild animal nearby." << endl;
    cout << "What do you do? (run/climb/hide): ";
    getline(cin, choice);
    
    if (choice == "run") {
        cout << "You run as fast as you can, but the animal catches up. You did not survive." << endl;
    } else if (choice == "climb") {
        cout << "You climb a tree quickly. The animal can't reach you. You survived!" << endl;
    } else if (choice == "hide") {
        cout << "You hide behind a bush, but the animal finds you. You did not survive." << endl;
    } else {
        cout << "Invalid choice! You hesitated, and the animal got you. You did not survive." << endl;
    }
}

// Function to simulate a desert scenario and decide based on user input
void desertScenario() {
    string choice;
    cout << "\n--- Desert Scenario ---" << endl;
    cout << "You are walking through a scorching desert. You are running out of water." << endl;
    cout << "You see a distant figure in the sand. What do you do? (approach/ignore/rest): ";
    getline(cin, choice);
    
    if (choice == "approach") {
        cout << "You approach the figure, but it's a mirage. You collapse from exhaustion. You did not survive." << endl;
    } else if (choice == "ignore") {
        cout << "You ignore the figure and keep moving. Eventually, you find a real oasis. You survived!" << endl;
    } else if (choice == "rest") {
        cout << "You rest for a while, but the sun is too strong. You did not survive." << endl;
    } else {
        cout << "Invalid choice! You hesitated, and the desert claimed you. You did not survive." << endl;
    }
}

// Function to simulate a mountain scenario and decide based on user input
void mountainScenario() {
    string choice;
    cout << "\n--- Mountain Scenario ---" << endl;
    cout << "You are trapped on a snowy mountain with a storm approaching." << endl;
    cout << "What do you do? (build shelter/climb down/signal for help): ";
    getline(cin, choice);
    
    if (choice == "build shelter") {
        cout << "You build a snow shelter and wait out the storm. You survived!" << endl;
    } else if (choice == "climb down") {
        cout << "You try to climb down, but the path is too dangerous. You did not survive." << endl;
    } else if (choice == "signal for help") {
        cout << "You signal for help, but the storm is too strong for anyone to see. You did not survive." << endl;
    } else {
        cout << "Invalid choice! The storm overtakes you, and you did not survive." << endl;
    }
}

// Function to control the game flow and make decisions based on player input
void startGame() {
    string scenarioChoice;

    while (true) {
        cout << "\nChoose a scenario: (jungle/desert/mountain/exit): ";
        getline(cin, scenarioChoice);

        if (scenarioChoice == "jungle") {
            jungleScenario();
        } else if (scenarioChoice == "desert") {
            desertScenario();
        } else if (scenarioChoice == "mountain") {
            mountainScenario();
        } else if (scenarioChoice == "exit") {
            cout << "Thanks for playing! Goodbye." << endl;
            break;
        } else {
            cout << "Invalid choice. Please choose a valid scenario." << endl;
        }
    }
}

// Main function to run the game
int main() {
    gameIntro();
    startGame();

    return 0;
}