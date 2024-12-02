#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// Function declarations
void hauntedKitchen();
void hauntedLibrary();
void hauntedBasement();
void hauntedGarden();
void hauntedAttic();
void solveRiddle();
void ghostEncounter();
void inventory();

vector<string> items; // Inventory to keep track of collected items

int main() {
    srand(time(0)); // Seed for random events

    cout << "Welcome to the Haunted Mansion!" << endl;
    cout << "You find yourself standing in the foyer of an old, creaky mansion. " << endl;
    cout << "There are several doors in front of you: " << endl;
    cout << "1. A door leading to the kitchen.\n2. A door leading to the library.\n3. A door leading to the basement.\n4. A door leading to the garden.\n5. A door leading to the attic." << endl;
    cout << "Which door do you choose? (1, 2, 3, 4, or 5): ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            hauntedKitchen();
            break;
        case 2:
            hauntedLibrary();
            break;
        case 3:
            hauntedBasement();
            break;
        case 4:
            hauntedGarden();
            break;
        case 5:
            hauntedAttic();
            break;
        default:
            cout << "The door vanishes in front of you... You realize you must choose wisely!" << endl;
            break;
    }

    cout << "\nThe adventure is over... for now." << endl;
    return 0;
}

void hauntedKitchen() {
    cout << "\nYou step into the kitchen. The air is cold, and the smell of something rotten fills the room." << endl;
    cout << "You see a rusty refrigerator and a mysterious cupboard." << endl;
    cout << "Do you want to open the refrigerator (1) or the cupboard (2)? ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "\nThe refrigerator creaks open, and a ghost leaps out, screaming! You run out of the kitchen in fear!" << endl;
    } else if (choice == 2) {
        cout << "\nYou open the cupboard and find a hidden passage! You escape the haunted kitchen safely." << endl;
        items.push_back("Mysterious Key"); // Adding item to inventory
        cout << "You found a Mysterious Key!" << endl;
    } else {
        cout << "\nThe walls seem to close in, and you faint from fear... Choose wisely next time." << endl;
    }
}

void hauntedLibrary() {
    cout << "\nYou enter the library. Dusty books line the shelves, and a flickering candle lights the room." << endl;
    cout << "In the corner, there's an old book lying open, and you hear whispers from behind the bookshelf." << endl;
    cout << "Do you want to read the book (1) or investigate the whispers (2)? ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "\nYou read the book, and suddenly, it bursts into flames! You drop it and run away in terror!" << endl;
    } else if (choice == 2) {
        cout << "\nYou move the bookshelf and find a secret door leading out of the mansion. You have escaped safely!" << endl;
        items.push_back("Ancient Map"); // Adding item to inventory
        cout << "You found an Ancient Map!" << endl;
    } else {
        cout << "\nThe library seems to come alive, and books start flying at you. You flee in panic!" << endl;
    }
}

void hauntedBasement() {
    cout << "\nYou slowly descend into the basement. It's dark, and you can barely see anything." << endl;
    cout << "You hear footsteps behind you, and you see a faint light in the distance." << endl;
    cout << "Do you want to investigate the light (1) or hide in the shadows (2)? ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "\nYou walk towards the light and find an old lantern. Suddenly, a ghostly figure appears and guides you out safely!" << endl;
        items.push_back("Lantern"); // Adding item to inventory
        cout << "You found a Lantern!" << endl;
    } else if (choice == 2) {
        cout << "\nYou hide in the shadows, but the footsteps get closer... and closer... You scream as something grabs you!" << endl;
    } else {
        cout << "\nYou freeze in fear, and the basement becomes your eternal resting place..." << endl;
    }
}

void hauntedGarden() {
    cout << "\nYou step into the garden. The air is cool, and the scent of earth fills your senses." << endl;
    cout << "You notice a strange, glowing plant and an old well covered in ivy." << endl;
    cout << "Do you want to inspect the plant (1) or look into the well (2)? ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "\nThe plant starts glowing brighter, and you feel rejuvenated. You pluck a glowing leaf." << endl;
        items.push_back("Glowing Leaf"); // Adding item to inventory
        cout << "You found a Glowing Leaf!" << endl;
    } else if (choice == 2) {
        cout << "\nYou look into the well and see something shining at the bottom. You reach down and pull out a golden coin." << endl;
        items.push_back("Golden Coin"); // Adding item to inventory
        cout << "You found a Golden Coin!" << endl;
    } else {
        cout << "\nThe garden suddenly feels darker, and you hear whispers... You decide to run back inside." << endl;
    }
}

void hauntedAttic() {
    cout << "\nYou climb the creaky stairs to the attic. It's dusty, and old furniture is scattered around." << endl;
    cout << "You see an old chest and a large, covered mirror." << endl;
    cout << "Do you want to open the chest (1) or uncover the mirror (2)? ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        int randomOutcome = rand() % 2;
        if (randomOutcome == 0) {
            cout << "\nYou open the chest and find a collection of old jewels." << endl;
            items.push_back("Old Jewels"); // Adding item to inventory
            cout << "You found Old Jewels!" << endl;
        } else {
            cout << "\nYou open the chest, but it's empty. Suddenly, the attic seems to get colder, and you decide to leave." << endl;
        }
    } else if (choice == 2) {
        cout << "\nYou uncover the mirror, and for a moment, you see a ghostly reflection staring back at you. You run out of the attic in terror!" << endl;
    } else {
        cout << "\nThe attic seems to close in on you, and you feel a presence... You decide to leave before it's too late." << endl;
    }
}

void solveRiddle() {
    cout << "\nThe ghost blocks your way and says, 'Solve my riddle, and I will let you pass.'" << endl;
    cout << "Riddle: I have keys but open no locks, I have space but no room. What am I?" << endl;
    cout << "Enter your answer: ";

    string answer;
    cin.ignore();
    getline(cin, answer);

    if (answer == "keyboard" || answer == "Keyboard") {
        cout << "\nThe ghost nods and disappears, allowing you to continue." << endl;
        items.push_back("Ghost's Blessing"); // Adding item to inventory
        cout << "You received the Ghost's Blessing!" << endl;
    } else {
        cout << "\nThe ghost shakes its head, and you feel a sudden chill. You must try again later..." << endl;
    }
}

void ghostEncounter() {
    cout << "\nA ghostly figure appears in front of you. It looks menacing, but it hasn't attacked yet." << endl;
    cout << "Do you want to run away (1) or try to communicate (2)? ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "\nYou turn and run as fast as you can. The ghost doesn't follow, and you manage to escape." << endl;
    } else if (choice == 2) {
        cout << "\nYou try to talk to the ghost. It listens and tells you of a hidden treasure in the mansion." << endl;
        items.push_back("Ghost's Clue"); // Adding item to inventory
        cout << "You received the Ghost's Clue!" << endl;
    } else {
        cout << "\nYou hesitate, and the ghost suddenly vanishes. You feel a chill, but nothing happens." << endl;
    }
}

void inventory() {
    cout << "\nYour Inventory: " << endl;
    for (const string& item : items) {
        cout << "- " << item << endl;
    }
}
