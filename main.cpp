#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int secretNumber = rand() % 100 + 1;
    int guess;
    cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
    } while (guess != secretNumber);

    cout << "Congratulations! 👏You guessed the number " << secretNumber << ".\n";

    return 0;
}
