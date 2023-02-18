#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum RPS {
    r = 1,
    p,
    s,
    quit
};

class Account {
public:
    int score;
    int input;
};

int main() {
    cout << "------------------------------------------------------------------" << endl;
    for (int i = 0; i < 13; ++i)
        cout << ' ';
    cout << "Welcome to Rock-Paper-Scissor Game !" << endl;
    cout << "------------------------------------------------------------------" << endl;
    for (int i = 0; i < 13; ++i)
        cout << ' ';
    cout << "How to play: " << endl;
    for (int i = 0; i < 13; ++i)
        cout << ' ';
    cout << "1->Rock" << endl;
    for (int i = 0; i < 13; ++i)
        cout << ' ';
    cout << "2->Paper" << endl;
    for (int i = 0; i < 13; ++i)
        cout << ' ';
    cout << "3->Scissor" << endl;
    for (int i = 0; i < 13; ++i)
        cout << ' ';
    cout << "Enter 4 to quit" << endl;
    cout << "------------------------------------------------------------------" << endl;
    srand(time(0));
    Account computer = {0};
    Account person = {0};
    while (1) {
        cout << "Score: " << endl << "Computer - " << computer.score << endl << "Person - " << person.score << endl;
        computer.input = rand()%4;
        if (computer.input<1) {
            while (computer.input<1)
                computer.input = rand()%4;
        }
        cout << "Choose your option:... ";
        cin >> person.input;
        cout << "--------------------------" << endl;
        if (person.input==r&&computer.input==s) {
            cout << "You won !" << endl;
            person.score++;
        }
        else if (person.input==r&&computer.input==p) {
            cout << "You lost !" << endl;
            computer.score++;
        }
        else if (person.input==r&&computer.input==r)
            cout << "Draw !" << endl;
        //
        if (person.input==s&&computer.input==p) {
            cout << "You won !" << endl;
            person.score++;
        }
        else if (person.input==s&&computer.input==r) {
            cout << "You lost !" << endl;
            computer.score++;
        }
        else if (person.input==s&&computer.input==s)
            cout << "Draw !" << endl;
        //
        if (person.input==p&&computer.input==r) {
            cout << "You Won !" << endl;
            person.score++;
        }
        else if (person.input==p&&computer.input==s) {
            cout << "You lost !" << endl;
            computer.score++;
        }
        else if (person.input==p&&computer.input==p)
            cout << "Draw !" << endl;
        if (person.input==quit)
            break;
    }
    cout << "Final score: " << endl << "Computer - " << computer.score << endl << "Person - " << person.score << endl;
    return 0;
}
