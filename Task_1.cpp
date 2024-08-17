#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    //  Random seed initialization
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int Guess = 0;

    cout << "Welcome to Number guess game!\n";
    cout << "I have generated a random number between 1 to 100.\n";
    cout << "Can you guess it ?\n";

    // Loop until user guesses the exact number
    while (Guess != randomNumber) {
        cout << "Enter your guess number: ";
        cin >> Guess;

        if (Guess > randomNumber) {
            cout << "Too high guess. Enter again.\n";
        } else if (Guess < randomNumber) {
            cout << "Too low guess. Enter again.\n";
        } else {
            cout << "Hurrey! You guessed the number.\n";
        }
    }

    return 0;
}