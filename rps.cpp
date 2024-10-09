#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int choice,wins,ch2,oppc;
string chosen;
void gen_rnd() {
    oppc = (rand() % 3) + 1;
    return;
}

int main() {
    srand(time(nullptr));
    BEGIN:
    int ch2 = 0;
    gen_rnd();
    cout << "Rock Paper Scissors!" << endl;
    cout << "Please choose:" << endl;
    cout << " (1) Rock" << endl << " (2) Paper" << endl << " (3) Scissors" << endl;
    cout << ":";
    cin >> choice;
    if (oppc == 1) {
        chosen = "ROCK";
    } else if (oppc == 2) {
        chosen = "PAPER";
    } else if (oppc == 3) {
        chosen = "SCISSORS";
    }
    cout << "The computer chose: " << chosen << "!" << endl;
    if (oppc == choice) {
        // tie
        cout << "A TIE!" << endl << endl;
    } else if (oppc == 1 && choice == 2) {
        // win for you
        cout << "YOU WIN!" << endl << endl;
    } else if (oppc == 2 && choice == 1) {
        // win for cpt
        cout << "YOU LOST!" << endl << endl;
    } else if (oppc == 1 && choice == 3) {
        // win for cpt
        cout << "YOU LOST!" << endl << endl;
    } else if (oppc == 3 && choice == 1) {
        // win for you
        cout << "YOU WIN!" << endl << endl;
    } else if (oppc == 2 && choice == 3) {
        // win for you
        cout << "YOU WIN!" << endl << endl;
    } else if (oppc == 3 && choice == 2) {
        // win for cpt
        cout << "YOU LOST!" << endl << endl;
    }



    cout << " Want to play again? " << endl;
    cout << "(1) Yes, (2) No" << endl;
    cout << ":";
    cin >> ch2;
    if ( ch2 == 1) {
        goto BEGIN;
    }
    return 0;
}
